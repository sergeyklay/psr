
/* $Id$ */

#ifndef PHP_PSR_H
#define PHP_PSR_H

extern zend_module_entry psr_module_entry;
#define phpext_psr_ptr &psr_module_entry

#define PHP_PSR_VERSION "0.0.1"
#define PHP_PSR_NAME "psr"
#define PHP_PSR_AUTHOR "Phalcon Team"
#define PHP_PSR_DESCRIPTION "The module implementation for the PSR standards as established by the PHP-FIG group."

#ifdef PHP_WIN32
#	define PHP_PSR_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_PSR_API __attribute__ ((visibility("default")))
#else
#	define PHP_PSR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#define PSR_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(psr, v)

#if defined(ZTS) && defined(COMPILE_DL_PSR)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif	/* PHP_PSR_H */

