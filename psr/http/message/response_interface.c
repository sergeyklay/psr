/* $Id$ */

#include "response_interface.h"
#include "message_interface.h"

/* Psr\Http\Message\ResponseInterface */
PHP_PSR_API zend_class_entry *psr_http_message_responseinterface_ce;

/* {{{ Psr\Http\Message\ResponseInterface functions[]
 */
static const zend_function_entry psr_http_message_responseinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_responseinterface, getStatusCode, psr_http_message_responseinterface_arginfo_get_status_code)
	ZEND_ABSTRACT_ME(psr_http_message_responseinterface, withStatus, psr_http_message_responseinterface_arginfo_with_status)
	ZEND_ABSTRACT_ME(psr_http_message_responseinterface, getReasonPhrase, psr_http_message_responseinterface_arginfo_get_reason_phrase)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_responseinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\ResponseInterface", psr_http_message_responseinterface_methods);
	psr_http_message_responseinterface_ce = zend_register_internal_interface(&ce);
	zend_class_implements(psr_http_message_responseinterface_ce, 1, psr_http_message_messageinterface_ce);

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
