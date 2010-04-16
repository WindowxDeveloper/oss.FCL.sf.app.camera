#
# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
#
# Initial Contributors:
# Nokia Corporation - initial contribution.
#
# Contributors:
#
# Description:
#

include(../unittest.pri)

TARGET = unittest_cxeenginesymbian

DEFINES += CXE_USE_DUMMY_CAMERA
DEFINES = $$unique(DEFINES)

INCLUDEPATH += ../../../inc/sensor

LIBS += -lecam
LIBS += -lecamadvsettings
LIBS += -lecamsnapshot
LIBS += -lecamdirectviewfinder
LIBS += -lfbscli
LIBS += -lbitgdi
LIBS += -lxqsettingsmanager
LIBS += -lecampluginsupport
LIBS += -lmediaclientvideo
LIBS += -lefsrv
LIBS += -lsysutil
LIBS += -lbafl
LIBS += -lmediaclientaudio
LIBS += -lecom
LIBS += -lmmfcontrollerframework
LIBS += -lplatformenv
LIBS += -lsensrvclient
LIBS += -lsensrvutil
LIBS += -limagingconfigmanager
LIBS += -lalfclient
LIBS += -lalfdecoderserverclient
LIBS += -lxqserviceutil


SOURCES += unittest_cxeenginesymbian.cpp \
           cxeenginesymbianunit.cpp \
           cxeenginesymbian.cpp \
           cxeengine.cpp \
           cxesettingscontrolsymbian.cpp \
           cxefakeautofocuscontrol.cpp \
           cxeautofocuscontrolsymbian.cpp \
           cxevideorecorderutilitysymbian.cpp \
           cxecameradevicecontrolsymbian.cpp \
           cxefakecameradevicecontrol.cpp \
           cxefakecameradevice.cpp \
           cxecameradevice.cpp \
           cxefakestillcapturecontrol.cpp \
           cxestillcapturecontrolsymbian.cpp \
           cxefakeviewfindercontrol.cpp \
           cxeviewfindercontrolsymbian.cpp \
           cxevideocontainer.cpp \
           cxefakevideocapturecontrol.cpp \
           cxestatemachine.cpp \
           cxestatemachinebase.cpp \
           cxestate.cpp \
           cxesettingsmodelimp.cpp \
           cxesettingscenrepstore.cpp \
           cxefilenamegeneratorsymbian.cpp \
           cxefakefilenamegenerator.cpp \
           cxezoomcontrolsymbian.cpp \
           cxefakezoomcontrol.cpp \
           cxevideocapturecontrolsymbian.cpp \
           cxefeaturemanagerimp.cpp \
           cxefakefeaturemanager.cpp \
           cxesettingsimp.cpp \
           cxesettingsmappersymbian.cpp \
           cxefakesettings.cpp \
           cxesoundplayersymbian.cpp \
           cxesensoreventhandlersymbian.cpp \
           cxefakesensoreventhandler.cpp \
           cxeerrormappingsymbian.cpp \
           cxefilesavethread.cpp \
           cxefilesavethreadfactoryunit.cpp \
           cxeimagedataitemsymbian.cpp \
           cxeimagedataqueuesymbian.cpp \
           cxestillimagesymbian.cpp \
           cxedummycamera.cpp \
           cxesysutil.cpp \
           sensor/xqsensor.cpp \
           sensor/xqaccsensor.cpp \
           sensor/xqdeviceorientation.cpp \
           sensor/xqdeviceorientation_p.cpp \
           sensor/xqsensor_p.cpp \
           sensor/xqaccsensor_p.cpp \
           cxefakequalitypresets.cpp \
           cxequalitypresetssymbian.cpp \



HEADERS += unittest_cxeenginesymbian.h \
           cxeenginesymbianunit.h \
           cxeenginesymbian.h \
           cxeengine.h \
           cxesettingscontrolsymbian.h \
           cxeautofocuscontrol.h \
           cxeautofocuscontrolsymbian.h \
           cxefakeautofocuscontrol.h \
           cxevideorecorderutility.h \
           cxevideorecorderutilitysymbian.h \
           cxecameradevice.h \
           cxecameradevicecontrol.h \
           cxefakecameradevicecontrol.h \
           cxecameradevicecontrolsymbian.h \
           cxefakecameradevice.h \
           cxestillcapturecontrol.h \
           cxefakestillcapturecontrol.h \
           cxestillcapturecontrolsymbian.h \
           cxeviewfindercontrol.h \
           cxefakeviewfindercontrol.h \
           cxeviewfindercontrolsymbian.h \
           cxevideocontainer.h \
           cxevideocapturecontrol.h \
           cxefakevideocapturecontrol.h \
           cxestatemachine.h \
           cxestatemachinebase.h \
           cxestate.h \
           cxesettingsmodel.h \
           cxesettingsimp.h \
           cxesettingscenrepstore.h \
           cxefilenamegeneratorsymbian.h \
           cxefakefilenamegenerator.h \
           cxezoomcontrolsymbian.h \
           cxefakezoomcontrol.h \
           cxezoomcontrol.h \
           cxevideocapturecontrolsymbian.h \
           cxevideocapturecontrol.h \
           cxefeaturemanager.h \
           cxefeaturemanagerimp.h \
           cxefakefeaturemanager.h \
           cxesettings.h \
           cxefakesettings.h \
           cxesettingsmappersymbian.h \
           cxesoundplayersymbian.h \
           cxesensoreventhandlersymbian.h \
           cxesensoreventhandler.h \
           cxefakesensoreventhandler.h \
           cxeerrormappingsymbian.h \
           cxefilesavethread.h \
           cxeimagedataitemsymbian.h \
           cxeimagedataitem.h \
           cxeimagedataqueuesymbian.h \
           cxeimagedataqueue.h \
           cxestillimagesymbian.h \
           cxestillimage.h \
           cxedummycamera.h \
           cxesysutil.h \
           sensor/xqsensor.h \
           sensor/xqaccsensor.h \
           sensor/xqdeviceorientation.h \
           sensor/xqdeviceorientation_p.h \
           sensor/xqsensor_p.h \
           sensor/xqaccsensor_p.h \
           cxequalitypresets.h \
           cxefakequalitypresets.h \
           cxequalitypresetssymbian.h
