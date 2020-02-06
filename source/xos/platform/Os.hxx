///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: Os.hxx
///
/// Author: $author$
///   Date: 5/5/2019
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_PLATFORM_OS_HXX_
#define _XOS_PLATFORM_OS_HXX_

#include "xos/platform/Os.h"
#include "xos/platform/Configure.hxx"

#if defined(WINDOWS)  
#include "xos/platform/microsoft/Windows.hxx"
#elif defined(APPLEOSX)  
#include "xos/platform/apple/Osx.hxx"
#elif defined(APPLEIOS)  
#include "xos/platform/apple/Ios.hxx"
#elif defined(ANDROID)
#include "xos/platform/google/Android.hxx"
#elif defined(CHROMEOS)
#include "xos/platform/google/Chromeos.hxx"
#elif defined(LINUX)  
#include "xos/platform/Linux.hxx"
#else /*/ defined(WINDOWS)  /*/
#include "xos/platform/Posix.hxx"
#endif /*/ defined(WINDOWS)  /*/

namespace xos {
namespace platform {


} /// namespace platform
} /// namespace xos

#endif /// _XOS_PLATFORM_OS_HXX_
