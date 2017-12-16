
/* $Id$ */

#ifndef PHP_PSR_H
#define PHP_PSR_H 1

extern zend_module_entry psr_module_entry;
#define phpext_psr_ptr &psr_module_entry

#define PHP_PSR_VERSION "0.0.1"
#define PHP_PSR_NAME "psr"
#define PHP_PSR_AUTHOR "Phalcon Team"
#define PHP_PSR_DESCRIPTION "The module implementation for the PSR standards as established by the PHP-FIG group."

#if PHP_VERSION_ID >= 70200

#define PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO    ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO
#define PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX
#define PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO     ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO
#define PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX  ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX

#else

#define PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, type, allow_null) \
	ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, type, NULL, allow_null)
#define PHP_PSR_BEGIN_ARG_WITH_RETURN_TYPE_INFO(name, type, allow_null) \
	ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO(name, type, NULL, allow_null)

#define PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(name, return_reference, required_num_args, class_name, allow_null) \
	ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, IS_OBJECT, class_name, allow_null)
#define PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO(name, class_name, allow_null) \
	PHP_PSR_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(name, 0, -1, class_name, allow_null)

#endif

#define PHP_PSR_MODULE_STARTUP(module)  ZEND_MODULE_STARTUP_N(psr_##module)(INIT_FUNC_ARGS_PASSTHRU)
#define PHP_PSR_MODULE_SHUTDOWN(module) ZEND_MODULE_SHUTDOWN_N(psr_##module)(INIT_FUNC_ARGS_PASSTHRU)

#ifdef PHP_WIN32
#	define PHP_PSR_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_PSR_API __attribute__ ((visibility("default")))
#else
#	define PHP_PSR_API
#endif

#ifdef ZTS
#include <TSRM.h>
#endif

#define PSR_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(psr, v)

#if defined(ZTS) && defined(COMPILE_DL_PSR)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif	/* PHP_PSR_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
