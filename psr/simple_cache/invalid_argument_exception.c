/* $Id$ */

#include "invalid_argument_exception.h"
#include "cache_exception.h"

/* Psr\SimpleCache\InvalidArgumentException */
PHP_PSR_API zend_class_entry *psr_simple_cache_invalidargumentexception_ce;

/* {{{ Psr\SimpleCache\InvalidArgumentException functions[]
 */
static const zend_function_entry psr_simple_cache_invalidargumentexception_methods[] = {
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_simple_cache_invalidargumentexception) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\SimpleCache\\InvalidArgumentException", psr_simple_cache_invalidargumentexception_methods);
	psr_simple_cache_invalidargumentexception_ce = zend_register_internal_interface(&ce);
	zend_class_implements(psr_simple_cache_invalidargumentexception_ce, 1, psr_simple_cache_cacheexception_ce);

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
