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

#ifndef CXENUMS_H
#define CXENUMS_H

#include <QVariant>

typedef QVariantMap CxeScene;


namespace Cxe
{
    enum CameraIndex
    {
        //! Primary camera index
        PrimaryCameraIndex   = 0,

        //! Secondary camera index. Secondary camera points at the user.
        SecondaryCameraIndex = 1
    };


    /**
     * Engine operating mode
     */
    enum CameraMode
    {
        //! Still image capture mode
        ImageMode,

        //! Video recording mode
        VideoMode
    };


    enum FlashMode
    {
        FlashAuto = 0,
        FlashAntiRedEye,
        FlashOn,
        FlashOff
    };

    enum ExposureMode
    {
        ExposureAuto = 0,
        ExposureBacklight,
        ExposureSport,
        ExposureNight
    };

    enum Colortone
    {
        ColortoneNormal = 0,
        ColortoneSepia,
        ColortoneNegative,
        ColortoneBlackAndWhite,
        ColortoneVivid
    };

    enum Whitebalance
    {
        WhitebalanceAutomatic = 0,
        WhitebalanceSunny,
        WhitebalanceCloudy,
        WhitebalanceIncandescent,
        WhitebalanceFluorescent
    };

    enum Sharpness
    {
        SharpnessHard = 2,
        SharpnessNormal = 0,
        SharpnessSoft = -2
    };

    enum LightSensitivity
    {
        LightSensitivityAutomatic,
        LightSensitivityLow,
        LightSensitivityMedium,
        LightSensitivityHigh
    };

    enum DeviceOrientation
    {
        Orientation0,
        Orientation90,
        Orientation180,
        Orientation270,
        OrientationNone  // Data is invalid or ignored for camera app use cases
    };

    enum AspectRatio
    {
        AspectRatio4to3, // standard
        AspectRatio16to9 // wide screen
    };

    enum SettingKeyType
    {
        Repository, // repository key
        PublishAndSubscribe // P&S key
    };

    /*!
    * Index to CxeRuntimeKeys::FREE_MEMORY_LEVELS comma separated values
    */
    enum FreeMemoryIndex
    {
        FreeMemoryTrigger = 0,
        FreeMemoryTarget
    };
}

namespace CxeSettingIds
{
    // Setting Ids
    static const char* FOCAL_RANGE                             = "focal_range";
    static const char* FLASH_MODE                              = "flash_mode";
    static const char* WHITE_BALANCE                           = "white_balance";
    static const char* LIGHT_SENSITIVITY                       = "light_sensitivity";
    static const char* EXPOSURE_MODE                           = "exposure_mode";
    static const char* SHARPNESS                               = "sharpness";
    static const char* COLOR_TONE                              = "color_tone";
    static const char* EV_COMPENSATION_VALUE                   = "ev_compensation_value";
    static const char* CONTRAST                                = "contrast";
    static const char* BRIGHTNESS                              = "brightness";
    static const char* FRAME_RATE                              = "frame_rate";
    static const char* SCENE_ID                                = "sceneId";
    static const char* IMAGE_QUALITY                           = "imageQuality";
    static const char* VIDEO_QUALITY                           = "videoQuality";
    static const char* SECONDARY_CAMERA                        = "2ndCamera";
    static const char* SELF_TIMER                              = "selfTimer";


    // file name/path related key values
    static const char*  FNAME_FOLDER_SUFFIX                    = "folder_suffix";
    static const char*  FNAME_MONTH_FOLDER                     = "month_folder";
    static const char*  FNAME_IMAGE_COUNTER                    = "image_counter";
    static const char*  FNAME_VIDEO_COUNTER                    = "video_counter";

    // scene mode keys
    static const char* IMAGE_SCENE                             = "still_scene_modes";
    static const char* VIDEO_SCENE                             = "video_scene_modes";

    // image scene mode key values
    static const char*  IMAGE_SCENE_AUTO                       = "image_scene_auto";
    static const char*  IMAGE_SCENE_PORTRAIT                   = "image_scene_portrait";
    static const char*  IMAGE_SCENE_SCENERY                    = "image_scene_scenery";
    static const char*  IMAGE_SCENE_MACRO                      = "image_scene_macro";
    static const char*  IMAGE_SCENE_SPORTS                     = "image_scene_sports";
    static const char*  IMAGE_SCENE_NIGHT                      = "image_scene_night";
    static const char*  IMAGE_SCENE_NIGHTPORTRAIT              = "image_scene_night_portrait";

    // video scene setting key values
    static const char*  VIDEO_SCENE_AUTO                       = "video_scene_auto";
    static const char*  VIDEO_SCENE_NIGHTPORTRAIT              = "video_scene_night_portrait";
    static const char*  VIDEO_SCENE_LOWLIGHT                   = "video_scene_low_light";
    static const char*  VIDEO_SCENE_NIGHT                      = "video_scene_night";

    // setting keys for post capture timeout
    static const char*  STILL_SHOWCAPTURED                     = "still_showcaptured";
    static const char*  VIDEO_SHOWCAPTURED                     = "video_showcaptured";

    // video mute setting
    static const char*  VIDEO_MUTE_SETTING                     = "video_mute_setting";
}


namespace CxeRuntimeKeys
{
    // Runtime keys
    static const char* PRIMARY_CAMERA_CAPTURE_KEYS   = "primary_camera_capture_keys";
    static const char* PRIMARY_CAMERA_AUTOFOCUS_KEYS = "primary_camera_autofocus_keys";
    static const char* SECONDARY_CAMERA_CAPTURE_KEYS = "secondary_camera_capture_keys";
    static const char* FREE_MEMORY_LEVELS            = "free_memory_levels";
    static const char* STILL_MAX_ZOOM_LIMITS         = "still_max_zoom_limits";
    static const char* VIDEO_MAX_ZOOM_LIMITS         = "video_max_zoom_limits";
}

#endif // CXENUMS_H
