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
#ifndef CXEIMAGEDATAITEMSYMBIAN_H
#define CXEIMAGEDATAITEMSYMBIAN_H

//  Include Files
#include <f32file.h> // for RFile and RFs
#include "cxeimagedataitem.h"
#include "cxestatemachine.h"


class RFs;

class CxeImageDataItemSymbian : public CxeImageDataItem,
                                public CxeStateMachine
{
    Q_OBJECT
public: // from CxeImageDataItemSymbian
    CxeImageDataItemSymbian(QByteArray data, QString filename, int id, CxeImageDataItem::State state = CxeImageDataItem::SavePending);
    virtual ~CxeImageDataItemSymbian();

    CxeImageDataItem::State state() const;
    CxeError::Id save();
    int id() const;
public: // new methods
    QString path() const;

protected: // from CxeStateMachine
    void handleStateChanged( int newStateId, CxeError::Id error );


protected:
    void initializeStates();

private: // private member functions

    void saveCleanup(); // delete data and report
    int checkDiskSpace(RFs* aFs, TInt aBytesToWrite, TInt aDrive);


private: // private data members

    int mIndex;
    int mError;
    int mId;

    // used for image saving
    QByteArray mData;
    QString mPath;
    RFile mFile;
    RFs mFs;
};



#endif  // __CXEIMAGEDATAITEMSYMBIAN_H__
