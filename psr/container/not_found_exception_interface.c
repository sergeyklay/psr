/* $Id$ */

#include "container_exception_interface.h"
#include "not_found_exception_interface.h"

PHP_PSR_API zend_class_entry *psr_container_notfoundexceptioninterface_ce;

/* {{{ psr_container_notfoundexceptioninterface_methods
 */
static const zend_function_entry psr_container_notfoundexceptioninterface_methods[] = {
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_container_notfoundexceptioninterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Container\\NotFoundExceptionInterface", psr_container_notfoundexceptioninterface_methods);
	psr_container_notfoundexceptioninterface_ce = zend_register_internal_interface(&ce);
	zend_class_implements(psr_container_notfoundexceptioninterface_ce, 1, psr_container_containerexceptioninterface_ce);

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
