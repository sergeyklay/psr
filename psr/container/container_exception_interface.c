/* $Id$ */

#include "container_exception_interface.h"

/* Psr\Container\ContainerExceptionInterface */
PHP_PSR_API zend_class_entry *psr_container_containerexceptioninterface_ce;

/* {{{ Psr\Container\ContainerExceptionInterface functions[]
 */
static const zend_function_entry psr_container_containerexceptioninterface_methods[] = {
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_container_containerexceptioninterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Container\\ContainerExceptionInterface", psr_container_containerexceptioninterface_methods);
	psr_container_containerexceptioninterface_ce = zend_register_internal_interface(&ce);

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
