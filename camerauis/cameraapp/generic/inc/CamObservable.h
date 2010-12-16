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
* Description:  Abstract interface for observable classes
*
*  Copyright � 2007 Nokia.  All rights reserved.
*  This material, including documentation and any related computer
*  programs, is protected by copyright controlled by Nokia.  All
*  rights are reserved.  Copying, including reproducing, storing,
*  adapting or translating, any or all of this material requires the
*  prior written consent of Nokia.  This material also contains
*  confidential information which may not be disclosed to others
*  without the prior written consent of Nokia.

*
*
*/


// INCLUDE FILES
#include "Cam.hrh"

#ifndef MCAMOBSERVABLE_H
#define MCAMOBSERVABLE_H

class MCamObserver;

class MCamObservable
    {
public:
    /**
    * Registers an observer if not previously registered
    * @param aObserver The observer concerned
    * @since 3.0
    */
    virtual void RegisterObserverL( MCamObserver* aObserver ) = 0;

    /**
    * Deregisters an observer if previously registered
    * @param aObserver The observer concerned
    * @since 3.0
    */
    virtual void DeregisterObserver( MCamObserver* aObserver ) = 0;

    /**
    * Broadcasts an event code to all registered observers
    * @param aEvent The event code
    */    
    virtual void BroadcastEvent( TCamObserverEvent aEvent ) = 0;            
    };
    
#endif // MCAMOBSERVABLE_H