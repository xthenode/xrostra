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
///   File: Handle.hxx
///
/// Author: $author$
///   Date: 7/27/2019
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HXX_
#define _XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HXX_

#include "xos/platform/os/microsoft/windows/Handle.h"
#include "xos/platform/os/microsoft/Windows.hxx"
#include "xos/base/Logged.hxx"

namespace xos {
namespace platform {
namespace os {
namespace microsoft {
namespace windows {

class _EXPORTED_ Handle;
class _EXPORTED_ Mutex;
class _EXPORTED_ Semaphore;
class _EXPORTED_ Thread;
class _EXPORTED_ Process;

namespace crt {
class _EXPORTED_ Thread;
class _EXPORTED_ Process;
} /// namespace crt

typedef Logged HandleImplements;
typedef extended::Logged HandleExtends;
///////////////////////////////////////////////////////////////////////
///  Class: Handle
///////////////////////////////////////////////////////////////////////
class _EXPORTED_ Handle: virtual public HandleImplements, public HandleExtends {
public:
    typedef HandleImplements Implements;
    typedef HandleExtends Extends;
    typedef Handle Derives; 

    ///////////////////////////////////////////////////////////////////////
    /// constructors / destructor
    ///////////////////////////////////////////////////////////////////////
    Handle(bool isLogged, bool isErrLogged): Extends(isLogged, isErrLogged), _dwLastError(0) {
    }
    Handle(bool isLogged): Extends(isLogged), _dwLastError(0) {
    }
    Handle(): Extends(false), _dwLastError(0) {
    }
    virtual ~Handle() {
    }
private:
    Handle(const Handle& copy): _dwLastError(0) {
    }

public:
    ///////////////////////////////////////////////////////////////////////
    /// Close... / Wait... / ...LastError
    ///////////////////////////////////////////////////////////////////////
    virtual BOOL CloseHandle() {
        BOOL success = TRUE;
        return success;
    }
    virtual DWORD WaitForSingleObject(DWORD dwMilliseconds) {
        DWORD dwStatus = WAIT_FAILED;
        return dwStatus;
    }
    virtual DWORD SetLastError(DWORD to) {
        _dwLastError = to;
        return _dwLastError;
    }
    virtual DWORD GetLastError() const {
        return _dwLastError;
    }

    ///////////////////////////////////////////////////////////////////////
    /// To...
    ///////////////////////////////////////////////////////////////////////
    virtual Handle* ToHandle() const {
        return ((Handle*)this);
    }
    virtual Mutex* ToMutex() const {
        return ((Mutex*)0);
    }
    virtual Semaphore* ToSemaphore() const {
        return ((Semaphore*)0);
    }
    virtual Thread* ToThread() const {
        return ((Thread*)0);
    }
    virtual Process* ToProcess() const {
        return ((Process*)0);
    }
    virtual crt::Thread* ToCrtThread() const {
        return ((crt::Thread*)0);
    }
    virtual crt::Process* ToCrtProcess() const {
        return ((crt::Process*)0);
    }
    
protected:
    DWORD _dwLastError;
}; /// class _EXPORTED_ Handle

} /// namespace windows
} /// namespace microsoft
} /// namespace os
} /// namespace platform
} /// namespace xos

#endif /// _XOS_PLATFORM_OS_MICROSOFT_WINDOWS_HANDLE_HXX_
