///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
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
///   File: MainOpt.hxx
///
/// Author: $author$
///   Date: 2/4/2020
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_APP_CONSOLE_XROSTRA_MAINOPT_HXX_
#define _XOS_APP_CONSOLE_XROSTRA_MAINOPT_HXX_

#include "xos/app/console/Main.hxx"

namespace xos {
namespace app {
namespace console {
namespace xrostra {

///////////////////////////////////////////////////////////////////////
///  Class: MainOptT
///////////////////////////////////////////////////////////////////////
template <class TExtends = console::Main, class TImplements = typename TExtends::Implements>
class _EXPORTED_ MainOptT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    typedef MainOptT Derives; 

    ///////////////////////////////////////////////////////////////////////
    /// constructors / destructor
    ///////////////////////////////////////////////////////////////////////
    MainOptT() {
    }
    virtual ~MainOptT() {
    }
private:
    MainOptT(const MainOptT& copy) {
    }
}; /// class _EXPORTED_ MainOptT
typedef MainOptT<> MainOpt;

} /// namespace xrostra
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// _XOS_APP_CONSOLE_XROSTRA_MAINOPT_HXX_
