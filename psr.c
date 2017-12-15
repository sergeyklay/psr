
/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>

#include "php_psr.h"
#include "class_entries.h"

/* Remove the following function when you have successfully modified config.m4
   so that your module can be compiled into PHP, it exists only for testing
   purposes. */

/* Every user-visible function in PHP should document itself in the source */
/* {{{ proto string confirm_psr_compiled(string arg)
   Return a string to confirm that the module is compiled in */
PHP_FUNCTION(confirm_psr_compiled)
{
	char *arg = NULL;
	size_t arg_len, len;
	zend_string *strg;

	if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &arg, &arg_len) == FAILURE) {
		return;
	}

	strg = strpprintf(0, "Congratulations! You have successfully modified ext/%.78s/config.m4. Module %.78s is now compiled into PHP.", PHP_PSR_NAME, arg);

	RETURN_STR(strg);
}
/* }}} */
/* The previous line is meant for vim and emacs, so it can correctly fold and
   unfold functions in source code. See the corresponding marks just before
   function definition, where the functions purpose is also documented. Please
   follow this convention for the convenience of others editing your code.
*/


/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(psr)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(psr)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(psr)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PSR_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PSR_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PSR_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PSR_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__);
	php_info_print_table_end();

	/* Remove comments if you have entries in php.ini
	DISPLAY_INI_ENTRIES();
	*/
}
/* }}} */

/* {{{ psr_functions[]
 *
 * Every user visible function must have an entry in psr_functions[].
 */
const zend_function_entry psr_functions[] = {
	PHP_FE(confirm_psr_compiled,	NULL)		/* TODO: For testing, remove later. */
	PHP_FE_END
};
/* }}} */

/* {{{ psr_module_entry
 */
zend_module_entry psr_module_entry = {
	STANDARD_MODULE_HEADER,
	PHP_PSR_NAME,
	psr_functions,
	PHP_MINIT(psr),
	PHP_MSHUTDOWN(psr),
	NULL, /* RINIT */
	NULL, /* RSHUTDOWN */
	PHP_MINFO(psr),
	PHP_PSR_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_PSR
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(psr)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
