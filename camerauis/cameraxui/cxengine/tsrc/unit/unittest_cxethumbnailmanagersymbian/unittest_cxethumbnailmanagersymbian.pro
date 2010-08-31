# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
# Initial Contributors:
# Nokia Corporation - initial contribution.
# Contributors:
# Description:

CONFIG *= cxeunit_no_system_paths

include(../unittest.pri)

TARGET = unittest_cxethumbnailmanagersymbian

INCLUDEPATH *= ../system_include
DEPENDPATH  *= ../system_include

LIBS *= -lthumbnailmanagerqt

HEADERS *= unittest_cxethumbnailmanagersymbian.h \
           cxethumbnailmanagersymbian.h \
           thumbnailmanager_qt.h \
           cxutils.h

SOURCES *= unittest_cxethumbnailmanagersymbian.cpp \
           thumbnailmanager_qt.cpp \
           cxethumbnailmanagersymbian.cpp
