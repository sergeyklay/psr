/* $Id$ */

#include "server_request_interface.h"
#include "request_interface.h"

/* Psr\Http\Message\ServerRequestInterface */
PHP_PSR_API zend_class_entry *psr_http_message_serverrequestinterface_ce;

/* {{{ Psr\Http\Message\ServerRequestInterface functions[]
 */
static const zend_function_entry psr_http_message_serverrequestinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getServerParams, psr_http_message_serverrequestinterface_arginfo_get_server_params)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getCookieParams, psr_http_message_serverrequestinterface_arginfo_get_cookie_params)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withCookieParams, psr_http_message_serverrequestinterface_arginfo_with_cookie_params)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getQueryParams, psr_http_message_serverrequestinterface_arginfo_get_query_params)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withQueryParams, psr_http_message_serverrequestinterface_arginfo_with_query_params)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getUploadedFiles, psr_http_message_serverrequestinterface_arginfo_get_uploaded_files)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withUploadedFiles, psr_http_message_serverrequestinterface_arginfo_with_uploaded_files)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getParsedBody, psr_http_message_serverrequestinterface_arginfo_get_parsed_body)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withParsedBody, psr_http_message_serverrequestinterface_arginfo_with_parsed_body)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getAttributes, psr_http_message_serverrequestinterface_arginfo_get_attributes)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, getAttribute, psr_http_message_serverrequestinterface_arginfo_get_attribute)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withAttribute, psr_http_message_serverrequestinterface_arginfo_with_attribute)
	ZEND_ABSTRACT_ME(psr_http_message_serverrequestinterface, withoutAttribute, psr_http_message_serverrequestinterface_arginfo_without_attribute)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_serverrequestinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\ServerRequestInterface", psr_http_message_serverrequestinterface_methods);
	psr_http_message_serverrequestinterface_ce = zend_register_internal_interface(&ce);
	zend_class_implements(psr_http_message_serverrequestinterface_ce, 1, psr_http_message_requestinterface_ce);

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
