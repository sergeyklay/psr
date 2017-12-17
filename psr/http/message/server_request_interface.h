/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_SERVER_REQUEST_INTERFACE_H
#define PSR_HTTP_MESSAGE_SERVER_REQUEST_INTERFACE_H 1

#include <php.h>
#include "php_psr.h"

#include "uri_interface.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_server_params, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_cookie_params, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_with_cookie_params, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, cookies, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_query_params, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_with_query_params, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, query, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_uploaded_files, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_with_uploaded_files, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, uploadedFiles, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_parsed_body, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_with_parsed_body, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, data, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_serverrequestinterface_arginfo_get_attributes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_get_attribute, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, default, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_with_attribute, 0, ZEND_RETURN_VALUE, 2)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_serverrequestinterface_arginfo_without_attribute, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_serverrequestinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_serverrequestinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_SERVER_REQUEST_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
