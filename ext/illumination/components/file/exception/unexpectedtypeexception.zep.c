
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
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Illumination_Components_File_Exception_UnexpectedTypeException) {

	ZEPHIR_REGISTER_CLASS_EX(Illumination\\Components\\File\\Exception, UnexpectedTypeException, illumination, components_file_exception_unexpectedtypeexception, illumination_components_file_exception_fileexception_ce, illumination_components_file_exception_unexpectedtypeexception_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Illumination_Components_File_Exception_UnexpectedTypeException, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *value_param = NULL, *expectedType_param = NULL, *_0 = NULL, *_1, _2, *_3 = NULL;
	zval *value = NULL, *expectedType = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &value_param, &expectedType_param);

	zephir_get_strval(value, value_param);
	zephir_get_strval(expectedType, expectedType_param);


	ZEPHIR_INIT_VAR(_0);
	if (1 == 0) {
		ZEPHIR_INIT_NVAR(_0);
		zephir_get_class(_0, value, 0 TSRMLS_CC);
	} else {
		ZEPHIR_INIT_VAR(_1);
		zephir_gettype(_1, value TSRMLS_CC);
		ZEPHIR_CPY_WRT(_0, _1);
	}
	ZEPHIR_SINIT_VAR(_2);
	ZVAL_STRING(&_2, "Expected argument of type %s, %s given", 0);
	ZEPHIR_CALL_FUNCTION(&_3, "sprintf", NULL, 1, &_2, expectedType, _0);
	zephir_check_call_status();
	ZEPHIR_CALL_PARENT(NULL, illumination_components_file_exception_unexpectedtypeexception_ce, this_ptr, "__construct", NULL, 0, _3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

