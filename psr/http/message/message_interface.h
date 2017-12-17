/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "../../../config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_MESSAGE_INTERFACE_H
#define PSR_HTTP_MESSAGE_MESSAGE_INTERFACE_H 1

#include <php.h>
#include "../../../php_psr.h"

#include "stream_interface.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_messageinterface_arginfo_get_protocol_version, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_with_protocol_version, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, version, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_messageinterface_arginfo_get_headers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_has_header, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_get_header, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_get_header_line, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_with_header, 0, ZEND_RETURN_VALUE, 2)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_with_added_header, 0, ZEND_RETURN_VALUE, 2)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_without_header, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_UNDEF, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_messageinterface_arginfo_get_body, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_messageinterface_arginfo_with_body, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_OBJ_INFO(0, body, Psr\\Http\\Message\\StreamInterface, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_messageinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_messageinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_MESSAGE_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
