/****************************************************************************
** Copyright (C) 2001-2016 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com.
** All rights reserved.
**
** This file is part of the KD Tools library.
**
** Licensees holding valid commercial KD Tools licenses may use this file in
** accordance with the KD Tools Commercial License Agreement provided with
** the Software.
**
** This file may be distributed and/or modified under the terms of the
** GNU Lesser General Public License version 2.1 and version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE.LGPL.txt included.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** Contact info@kdab.com if any conditions of this licensing are not
** clear to you.
**
**********************************************************************/

#ifndef __KDUNITTEST_KDUNITTESTGLOBAL_H__
#define __KDUNITTEST_KDUNITTESTGLOBAL_H__

#include <QtCore/qglobal.h>

#ifdef KDTOOLS_SHARED
  #ifdef BUILD_SHARED_KDUNITTEST
    #define KDTOOLS_UNITTEST_EXPORT Q_DECL_EXPORT
  #else
    #define KDTOOLS_UNITTEST_EXPORT Q_DECL_IMPORT
  #endif
#else
  #define KDTOOLS_UNITTEST_EXPORT
#endif

#define MAKEINCLUDES_EXPORT

#endif /*__KDUNITTEST_KDUNITTESTGLOBAL_H__*/