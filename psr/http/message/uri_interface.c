/* $Id$ */

#include "uri_interface.h"

PHP_PSR_API zend_class_entry *psr_http_message_uriinterface_ce;

/* {{{ psr_http_message_uriinterface_methods
 */
static const zend_function_entry psr_http_message_uriinterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getScheme, psr_http_message_uriinterface_arginfo_get_scheme)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getAuthority, psr_http_message_uriinterface_arginfo_get_authority)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getUserInfo, psr_http_message_uriinterface_arginfo_get_user_info)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getHost, psr_http_message_uriinterface_arginfo_get_host)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getPort, psr_http_message_uriinterface_arginfo_get_port)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getPath, psr_http_message_uriinterface_arginfo_get_path)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getQuery, psr_http_message_uriinterface_arginfo_get_query)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, getFragment, psr_http_message_uriinterface_arginfo_get_fragment)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withScheme, psr_http_message_uriinterface_arginfo_with_scheme)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withUserInfo, psr_http_message_uriinterface_arginfo_with_user_info)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withHost, psr_http_message_uriinterface_arginfo_with_host)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withPort, psr_http_message_uriinterface_arginfo_with_port)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withPath, psr_http_message_uriinterface_arginfo_with_path)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withQuery, psr_http_message_uriinterface_arginfo_with_query)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, withFragment, psr_http_message_uriinterface_arginfo_with_fragment)
	ZEND_ABSTRACT_ME(psr_http_message_uriinterface, __toString, psr_http_message_uriinterface_arginfo_to_string)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_uriinterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\UriInterface", psr_http_message_uriinterface_methods);
	psr_http_message_uriinterface_ce = zend_register_internal_interface(&ce);

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
