/* $Id$ */

#include "cache_interface.h"

/* Psr\SimpleCache\CacheInterface */
PHP_PSR_API zend_class_entry *psr_simple_cache_cacheinterface_ce;

/* {{{ Psr\SimpleCache\CacheInterface functions[]
 */
static const zend_function_entry psr_simple_cache_cacheinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, get, psr_simple_cache_cacheinterface_arginfo_get)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, set, psr_simple_cache_cacheinterface_arginfo_set)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, delete, psr_simple_cache_cacheinterface_arginfo_delete)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, clear, psr_simple_cache_cacheinterface_arginfo_clear)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, getMultiple, psr_simple_cache_cacheinterface_arginfo_get_multiple)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, setMultiple, psr_simple_cache_cacheinterface_arginfo_set_multiple)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, deleteMultiple, psr_simple_cache_cacheinterface_arginfo_delete_multiple)
	ZEND_ABSTRACT_ME(psr_simple_cache_cacheinterface, has, psr_simple_cache_cacheinterface_arginfo_has)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_simple_cache_cacheinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\SimpleCache\\CacheInterface", psr_simple_cache_cacheinterface_methods);
	psr_simple_cache_cacheinterface_ce = zend_register_internal_interface(&ce);

	return SUCCESS;
}
/* }}} */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
