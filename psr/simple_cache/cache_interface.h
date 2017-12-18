/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "../../config.h"
#endif

#ifndef PSR_SIMPLE_CACHE_CACHE_INTERFACE_H
#define PSR_SIMPLE_CACHE_CACHE_INTERFACE_H 1

#include <php.h>
#include "../../php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_get, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, default, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_set, 0, ZEND_RETURN_VALUE, 2)
	ZEND_ARG_TYPE_INFO(0, key, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, ttl, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_delete, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_simple_cache_cacheinterface_arginfo_clear, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_get_multiple, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, keys, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, default, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_set_multiple, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, values, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, default, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_delete_multiple, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, keys, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_simple_cache_cacheinterface_arginfo_has, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_UNDEF, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_simple_cache_cacheinterface_ce;

ZEND_MINIT_FUNCTION(psr_simple_cache_cacheinterface);

END_EXTERN_C()

#endif /* PSR_SIMPLE_CACHE_CACHE_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
