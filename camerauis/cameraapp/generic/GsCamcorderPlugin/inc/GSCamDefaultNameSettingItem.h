/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies). 
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
* Description:  Setting item for name base type (date/text)*
*/




#ifndef GSCAMDEFAULTNAMESETTINGITEM_H
#define GSCAMDEFAULTNAMESETTINGITEM_H

//  INCLUDES
#include <aknsettingitemlist.h>
#include "CamSettingsInternal.hrh"

/**
* Setting item for name base type (date/text)
* @since 2.8
*/
class CGSCamDefaultNameSettingItem : public CAknEnumeratedTextPopupSettingItem
    {
    public: // Constructors and destructor
        /**
        * C++ constructor
        * @since 2.8
        * @param aNameBase   current name base 
        * @param aMode       current mode (video or still image)
        * @param aIdentifier setting page resource id
        * @param aValue      current name base type
        */
        CGSCamDefaultNameSettingItem( TDes& aNameBase,
                                      TCamCameraMode aMode, 
                                      TInt aIdentifier, 
                                      TInt& aValue,
                                      TBool iCamera );

        /**
        * Destructor
        */
        virtual ~CGSCamDefaultNameSettingItem();

    protected: // Functions from base classes
        /**
        * From CAknEnumeratedTextPopupSettingItem
        * @since 2.8
        * Framework method for constructing the launching setting page.
        * @return   a constructed CAknSettingPage object on the heap
        */
        CAknSettingPage* CreateSettingPageL();

    private: // Data
        // Reference to the cuurent name base.
        TDes& iNameBase;
        // The current mode of capture.
        TCamCameraMode iMode;
        TBool iCamera;
    };


#endif // GSCAMDEFAULTNAMESETTINGITEM_H

// End of File
