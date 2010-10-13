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
* Description:  observer handler class
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


#include <e32base.h>
#include "CamObservable.h"

#ifndef CAMOBSERVERHANDLER_H
#define CAMOBSERVERHANDLER_H

class CCamObserverHandler : public CBase, public MCamObservable
    {
public:
	/**
	*	Static factory construction function
    *   @since 2.8
	*	@return pointer to constructed instance of CCamNaviCounterModel
	*/
	static CCamObserverHandler* NewL();

    /**
    * Destructor.
    */
    ~CCamObserverHandler();
    
    
public:
    /**
    * Registers an observer if not previously registered
    * @param aObserver The observer concerned
    * @since 3.0
    */
    void RegisterObserverL(MCamObserver* aObserver);
    
    /**
    * Deregisters an observer if previously registered
    * @param aObserver The observer concerned
    * @since 3.0
    */
    void DeregisterObserver(MCamObserver* aObserver);
    
    /**
    * Broadcasts an event code to all registered observers
    * @param aEvent The event code
    */    
    void BroadcastEvent(TCamObserverEvent aEvent);

protected:
    /**
    * C++ Constructor
    */
    CCamObserverHandler();
    
    /**
    * Second-phase constructor
    */
    void ConstructL();
    
private:
    // Internal list of observers
    RPointerArray<MCamObserver> iObservers;
    };
        
#endif // CAMOBSERVERHANDLER_H
