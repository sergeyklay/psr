/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "../../../config.h"
#endif

#ifndef PSR_HTTP_MESSAGE_RESPONSE_INTERFACE_H
#define PSR_HTTP_MESSAGE_RESPONSE_INTERFACE_H 1

#include <php.h>
#include "../../../php_psr.h"

BEGIN_EXTERN_C()

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO(psr_http_message_responseinterface_arginfo_get_status_code, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(psr_http_message_responseinterface_arginfo_with_status, 0, ZEND_RETURN_VALUE, 1)
	ZEND_ARG_TYPE_INFO(0, code, IS_UNDEF, 0)
	ZEND_ARG_TYPE_INFO(0, reasonPhrase, IS_UNDEF, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(psr_http_message_responseinterface_arginfo_get_reason_phrase, 0)
ZEND_END_ARG_INFO()
/* }}} */

extern PHP_PSR_API zend_class_entry *psr_http_message_responseinterface_ce;

ZEND_MINIT_FUNCTION(psr_http_message_responseinterface);

END_EXTERN_C()

#endif /* PSR_HTTP_MESSAGE_RESPONSE_INTERFACE_H */

/*
 * Local Variables:
 * c-basic-offset: 4
 * tab-width: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
