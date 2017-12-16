/* $Id$ */

#include "container_interface.h"

zend_class_entry *psr_container_containerinterface_ce;

/* {{{ psr_container_containerinterface_methods
 */
static const zend_function_entry psr_container_containerinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_container_containerinterface, get, arginfo_psr_container_get)
	ZEND_ABSTRACT_ME(psr_container_containerinterface, has, arginfo_psr_container_has)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_container_containerinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Container\\ContainerInterface", psr_container_containerinterface_methods);
	psr_container_containerinterface_ce = zend_register_internal_interface(&ce);

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
