/* $Id$ */

#include "message_interface.h"

/* Psr\Http\Message\MessageInterface */
PHP_PSR_API zend_class_entry *psr_http_message_messageinterface_ce;

/* {{{ Psr\Http\Message\MessageInterface functions[]
 */
static const zend_function_entry psr_http_message_messageinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, getProtocolVersion, psr_http_message_messageinterface_arginfo_get_protocol_version)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, withProtocolVersion, psr_http_message_messageinterface_arginfo_with_protocol_version)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, getHeaders, psr_http_message_messageinterface_arginfo_get_headers)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, hasHeader, psr_http_message_messageinterface_arginfo_has_header)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, getHeader, psr_http_message_messageinterface_arginfo_get_header)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, getHeaderLine, psr_http_message_messageinterface_arginfo_get_header_line)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, withHeader, psr_http_message_messageinterface_arginfo_with_header)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, withAddedHeader, psr_http_message_messageinterface_arginfo_with_added_header)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, withoutHeader, psr_http_message_messageinterface_arginfo_without_header)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, getBody, psr_http_message_messageinterface_arginfo_get_body)
	ZEND_ABSTRACT_ME(psr_http_message_messageinterface, withBody, psr_http_message_messageinterface_arginfo_with_body)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_messageinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\MessageInterface", psr_http_message_messageinterface_methods);
	psr_http_message_messageinterface_ce = zend_register_internal_interface(&ce);

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
