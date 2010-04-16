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
#ifndef CXEFAKESETTINGS_H
#define CXEFAKESETTINGS_H

#include "cxesettingscenrepstore.h"
#include "cxeerror.h"

class CxeFakeSettingsStore : public CxeSettingsStore
{

public:
    CxeFakeSettingsStore();
	~CxeFakeSettingsStore();

public: // from base class
    void reset();
	CxeError::Id get(const QString& key, QVariant &value);
	void get(long int uid, unsigned long int key, Cxe::SettingKeyType type, QVariant &value);
	CxeError::Id set(const QString& key,const QVariant newValue);
	QHash<QString, QVariantList> loadRuntimeSettings(QList<QString>& keylist);

private:
    QHash<QString, QVariant> mSettingKeyHash;
    QHash<QString, QVariant> mRuntimeKeyHash;
};

#endif /*CXEFAKESETTINGS_H*/

// end  of file
