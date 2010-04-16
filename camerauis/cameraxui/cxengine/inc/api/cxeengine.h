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
#ifndef CXEENGINE_H
#define CXEENGINE_H

#include <QObject> 
#include "cxenamespace.h"

class CxeCameraDeviceControl;
class CxeViewfinderControl;
class CxeStillCaptureControl;
class CxeVideoCaptureControl;
class CxeAutoFocusControl;
class CxeZoomControl;
class CxeImageDataQueue;
class CxeFeatureManager;
class CxeSettings;

/**
 * CxeEngine provides the the entry point into CameraX engine. This is the
 * first class the client needs to initialize. CxeEngine then provides
 * references to other CameraX engine objects. 
 */
class CxeEngine : public QObject
{
    Q_OBJECT
public:
    /**
     * Create a new engine instance. This is the first call the client needs to
     * do when using CxeEngine.
     */
    IMPORT_C static CxeEngine* createEngine();

    virtual ~CxeEngine();

    /**
     * Access the camera device control.
     */
    virtual CxeCameraDeviceControl &cameraDeviceControl() = 0;

    /**
     * Access the viewfinder control.
     */
    virtual CxeViewfinderControl &viewfinderControl() = 0;

    /**
     * Access the still capture control.
     */
    virtual CxeStillCaptureControl &stillCaptureControl() = 0;

    /**
     * Access the video capture control.
     */
    virtual CxeVideoCaptureControl &videoCaptureControl() = 0;

    /**
     * Access the auto-focus control.
     */
    virtual CxeAutoFocusControl &autoFocusControl() = 0;

    /**
     * Access the zoom control.
     */
    virtual CxeZoomControl &zoomControl() = 0;

    /**
     * Access the settings model.
     */
    virtual CxeSettings &settings() = 0;
    virtual CxeFeatureManager &featureManager() = 0;

    /**
     * Get current camera mode.
     */
    virtual Cxe::CameraMode mode() const = 0;

    /**
     * Initialize the camera in either still or video mode. This method is also
     * used to switch between modes.
     */
    virtual void initMode( Cxe::CameraMode cameraMode ) = 0;

    //! returns if the engine is ready or not
    virtual bool isEngineReady() = 0;

protected:
    CxeEngine();

private:
    Q_DISABLE_COPY( CxeEngine )
};

#endif // CXEENGINE_H
