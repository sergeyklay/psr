/* $Id$ */

#include "cache_exception.h"

/* Psr\SimpleCache\CacheException */
PHP_PSR_API zend_class_entry *psr_simple_cache_cacheexception_ce;

/* {{{ Psr\SimpleCache\CacheException functions[]
 */
static const zend_function_entry psr_simple_cache_cacheexception_methods[] = {
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_simple_cache_cacheexception) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\SimpleCache\\CacheException", psr_simple_cache_cacheexception_methods);
	psr_simple_cache_cacheexception_ce = zend_register_internal_interface(&ce);

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
