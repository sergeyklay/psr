/* $Id$ */

#include "request_interface.h"
#include "message_interface.h"

/* Psr\Http\Message\RequestInterface */
PHP_PSR_API zend_class_entry *psr_http_message_requestinterface_ce;

/* {{{ Psr\Http\Message\RequestInterface functions[]
 */
static const zend_function_entry psr_http_message_requestinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, getRequestTarget, psr_http_message_requestinterface_arginfo_get_request_target)
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, withRequestTarget, psr_http_message_requestinterface_arginfo_with_request_target)
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, getMethod, psr_http_message_requestinterface_arginfo_get_method)
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, withMethod, psr_http_message_requestinterface_arginfo_with_method)
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, getUri, psr_http_message_requestinterface_arginfo_get_uri)
	ZEND_ABSTRACT_ME(psr_http_message_requestinterface, withUri, psr_http_message_requestinterface_arginfo_with_uri)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_requestinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\RequestInterface", psr_http_message_requestinterface_methods);
	psr_http_message_requestinterface_ce = zend_register_internal_interface(&ce);
	zend_class_implements(psr_http_message_requestinterface_ce, 1, psr_http_message_messageinterface_ce);

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
