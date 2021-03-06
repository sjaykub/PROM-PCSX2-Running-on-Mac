/*** Autogenerated by WIDL 4.12.1 from /Users/gcenx/Downloads/CROSSOVER19.0.1/sources/wine/include/amsi.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __amsi_h__
#define __amsi_h__

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(push, ptr32)
#pragma clang storage_addr_space(push, ptr32)
#endif
/* Forward declarations */

/* Headers for imported files */


#ifdef __cplusplus
extern "C" {
#endif

DECLARE_HANDLE(HAMSICONTEXT);
DECLARE_HANDLE(HAMSISESSION);
typedef enum AMSI_RESULT {
    AMSI_RESULT_CLEAN = 0x0,
    AMSI_RESULT_NOT_DETECTED = 0x1,
    AMSI_RESULT_BLOCKED_BY_ADMIN_START = 0x4000,
    AMSI_RESULT_BLOCKED_BY_ADMIN_END = 0x4fff,
    AMSI_RESULT_DETECTED = 0x8000
} AMSI_RESULT;
void WINAPI AmsiCloseSession(HAMSICONTEXT,HAMSISESSION);
HRESULT WINAPI AmsiInitialize(const WCHAR*,HAMSICONTEXT*);
HRESULT WINAPI AmsiOpenSession(HAMSICONTEXT,HAMSISESSION*);
HRESULT WINAPI AmsiScanBuffer(HAMSICONTEXT,void*,ULONG,const WCHAR*,HAMSISESSION,AMSI_RESULT*);
HRESULT WINAPI AmsiScanString(HAMSICONTEXT,const WCHAR*,const WCHAR *,HAMSISESSION,AMSI_RESULT*);
void WINAPI AmsiUninitialize(HAMSICONTEXT);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#ifdef __i386_on_x86_64__
#pragma clang default_addr_space(pop)
#pragma clang storage_addr_space(pop)
#endif
#endif /* __amsi_h__ */
