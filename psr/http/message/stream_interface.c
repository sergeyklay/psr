/* $Id$ */

#include "stream_interface.h"

/* Psr\Http\Message\StreamInterface */
PHP_PSR_API zend_class_entry *psr_http_message_streaminterface_ce;

/* {{{ Psr\Http\Message\StreamInterface functions[]
 */
static const zend_function_entry psr_http_message_streaminterface_methods[] = {
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, close, psr_http_message_streaminterface_arginfo_close)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, detach, psr_http_message_streaminterface_arginfo_detach)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, getSize, psr_http_message_streaminterface_arginfo_get_size)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, tell, psr_http_message_streaminterface_arginfo_tell)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, eof, psr_http_message_streaminterface_arginfo_eof)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, isSeekable, psr_http_message_streaminterface_arginfo_is_seekable)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, seek, psr_http_message_streaminterface_arginfo_seek)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, rewind, psr_http_message_streaminterface_arginfo_rewind)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, isWritable, psr_http_message_streaminterface_arginfo_is_writable)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, write, psr_http_message_streaminterface_arginfo_write)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, isReadable, psr_http_message_streaminterface_arginfo_is_readable)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, read, psr_http_message_streaminterface_arginfo_read)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, getContents, psr_http_message_streaminterface_arginfo_get_contents)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, getMetadata, psr_http_message_streaminterface_arginfo_get_metadata)
	ZEND_ABSTRACT_ME(psr_http_message_streaminterface, __toString, psr_http_message_streaminterface_arginfo_to_string)
	ZEND_FE_END
};
/* }}} */

/** {{{ ZEND_MINIT_FUNCTION
 */
ZEND_MINIT_FUNCTION(psr_http_message_streaminterface) {
	zend_class_entry ce;
	INIT_CLASS_ENTRY(ce, "Psr\\Http\\Message\\StreamInterface", psr_http_message_streaminterface_methods);
	psr_http_message_streaminterface_ce = zend_register_internal_interface(&ce);

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
