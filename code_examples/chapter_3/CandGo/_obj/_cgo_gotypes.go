// Created by cgo - DO NOT EDIT

package print

import "unsafe"

import "os"

import _ "runtime/cgo"

type _ unsafe.Pointer

func _Cerrno(dst *os.Error, x int) { *dst = os.Errno(x) }
type _Ctype_char int8
type _Ctype_struct__iobuf struct {
	_ptr		*_Ctype_char
	_cnt		_Ctype_int
	_base		*_Ctype_char
	_flag		_Ctype_int
	_file		_Ctype_int
	_charbuf	_Ctype_int
	_bufsiz		_Ctype_int
	_tmpfname	*_Ctype_char
}
type _Ctypedef_FILE _Ctype_struct__iobuf
type _Ctype_int int32
type _Ctype_void [0]byte
var _Cvar_stdout **_Ctypedef_FILE

func _Cfunc_CString(string) *_Ctype_char
func _Cfunc_free(unsafe.Pointer)
func _Cfunc_fputs(*_Ctype_char, *_Ctypedef_FILE) _Ctype_int
