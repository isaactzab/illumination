
#ifdef HAVE_CONFIG_H
#include "../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../php_ext.h"
#include "../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Illumination_Components_File_Exception_FileNotFoundException) {

	ZEPHIR_REGISTER_CLASS_EX(Illumination\\Components\\File\\Exception, FileNotFoundException, illumination, components_file_exception_filenotfoundexception, illumination_components_file_exception_fileexception_ce, illumination_components_file_exception_filenotfoundexception_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Illumination_Components_File_Exception_FileNotFoundException, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *path_param = NULL, _0, *_1 = NULL;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &path_param);

	zephir_get_strval(path, path_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "The file %s does not exist", 0);
	ZEPHIR_CALL_FUNCTION(&_1, "sprintf", NULL, 1, &_0, path);
	zephir_check_call_status();
	ZEPHIR_CALL_PARENT(NULL, illumination_components_file_exception_filenotfoundexception_ce, this_ptr, "__construct", NULL, 0, _1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

