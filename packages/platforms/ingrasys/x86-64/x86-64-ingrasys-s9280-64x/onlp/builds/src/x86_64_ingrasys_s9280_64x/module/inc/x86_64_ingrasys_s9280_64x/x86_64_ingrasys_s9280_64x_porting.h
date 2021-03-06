/********************************************************//**
 *
 * @file
 * @brief x86_64_Ingrasys_s9280_64x Porting Macros.
 *
 * @addtogroup x86_64_Ingrasys_s9280_64x-porting
 * @{
 *
 ***********************************************************/
#ifndef __X86_64_INGRAYSYS_S9280_64X_PORTING_H__
#define __X86_64_INGRAYSYS_S9280_64X_PORTING_H__

/* <auto.start.portingmacro(ALL).define> */
#if X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_MALLOC
    #if defined(GLOBAL_MALLOC)
        #define X86_64_INGRAYSYS_S9280_64X_MALLOC GLOBAL_MALLOC
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_MALLOC malloc
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_MALLOC is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_FREE
    #if defined(GLOBAL_FREE)
        #define X86_64_INGRAYSYS_S9280_64X_FREE GLOBAL_FREE
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_FREE free
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_FREE is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define X86_64_INGRAYSYS_S9280_64X_MEMSET GLOBAL_MEMSET
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_MEMSET memset
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define X86_64_INGRAYSYS_S9280_64X_MEMCPY GLOBAL_MEMCPY
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_MEMCPY memcpy
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_STRNCPY
    #if defined(GLOBAL_STRNCPY)
        #define X86_64_INGRAYSYS_S9280_64X_STRNCPY GLOBAL_STRNCPY
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_STRNCPY strncpy
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_STRNCPY is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define X86_64_INGRAYSYS_S9280_64X_VSNPRINTF GLOBAL_VSNPRINTF
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_VSNPRINTF vsnprintf
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define X86_64_INGRAYSYS_S9280_64X_SNPRINTF GLOBAL_SNPRINTF
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_SNPRINTF snprintf
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef X86_64_INGRAYSYS_S9280_64X_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define X86_64_INGRAYSYS_S9280_64X_STRLEN GLOBAL_STRLEN
    #elif X86_64_INGRAYSYS_S9280_64X_CONFIG_PORTING_STDLIB == 1
        #define X86_64_INGRAYSYS_S9280_64X_STRLEN strlen
    #else
        #error The macro X86_64_INGRAYSYS_S9280_64X_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __X86_64_INGRAYSYS_S9280_64X_PORTING_H__ */
/* @} */
