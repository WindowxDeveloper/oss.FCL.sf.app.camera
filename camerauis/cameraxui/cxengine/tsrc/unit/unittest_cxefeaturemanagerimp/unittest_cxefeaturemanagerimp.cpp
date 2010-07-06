/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:
*
*/

#include <QTest>

#include "unittest_cxefeaturemanagerimp.h"
#include "cxefakesettingsmodel.h"
#include "cxefeaturemanagerimp.h"
#include "cxenamespace.h"


static const char* INVALID_KEY = "invalid key";
static const char* EMPTY_KEY = "";


UnitTestCxeFeatureManager::UnitTestCxeFeatureManager()
: mFakeSettingsModel(NULL), mFeatureManager(NULL)
{
}

UnitTestCxeFeatureManager::~UnitTestCxeFeatureManager()
{

}

// Run before each individual test case
void UnitTestCxeFeatureManager::init()
{
    // fake model contains initialized test data.
    mFakeSettingsModel = new CxeFakeSettingsModel();
    mFeatureManager = new CxeFeatureManagerImp(*mFakeSettingsModel);
}

// Run after each individual test case
void UnitTestCxeFeatureManager::cleanup()
{
    delete mFakeSettingsModel;
    mFakeSettingsModel = 0;

    delete mFeatureManager;
    mFeatureManager = 0;
}

// Testing that isFeatureSupported function returns correct values
void UnitTestCxeFeatureManager::testIsFeatureSupported()
{
    bool isSupported;
    CxeError::Id err;
    QString key;

    // test that invalid key is not found.
    err = mFeatureManager->isFeatureSupported(INVALID_KEY, isSupported);
    QVERIFY(!isSupported);
    QCOMPARE(err, CxeError::NotFound);
        
    // try with empty key
    err = mFeatureManager->isFeatureSupported(EMPTY_KEY, isSupported);
    QVERIFY(!isSupported);
    QCOMPARE(err, CxeError::NotFound);

    // test with right key
    key = CxeRuntimeKeys::PRIMARY_CAMERA_CAPTURE_KEYS;
    err = mFeatureManager->isFeatureSupported(key, isSupported);
    QVERIFY(isSupported);
    QCOMPARE(err, CxeError::None);

}

// test that configuredValues function returns a correct error code and not any values
// with any arbitrary key when there is no data set
void UnitTestCxeFeatureManager::testconfiguredValues()
{
    QList<int> values;
    CxeError::Id err;
    QString key;

    // case 1: test with invalid key
    err = mFeatureManager->configuredValues(INVALID_KEY, values);
    QCOMPARE(err, CxeError::NotFound);
    QCOMPARE(values.count(), 0);
    
    // case 2: test with empty key
    err = mFeatureManager->configuredValues(EMPTY_KEY, values);
    QCOMPARE(err, CxeError::NotFound);
    QCOMPARE(values.count(), 0);
    
    // case 3: test with right key
    key = CxeRuntimeKeys::VIDEO_MAX_ZOOM_LIMITS;
    err = mFeatureManager->configuredValues(key, values);
    QCOMPARE(err, CxeError::None);
    QVERIFY(values.count() > 0);
  
}


// main() function non-GUI testing
QTEST_MAIN(UnitTestCxeFeatureManager);
