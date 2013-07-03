// Created by cgo - DO NOT EDIT

//line c2.go:1
package print


import "unsafe"

func Print(s string) {
	cs := _Cfunc_CString(s)
	defer _Cfunc_free(unsafe.Pointer(cs))
	_Cfunc_fputs(cs, (*_Ctypedef_FILE)(*_Cvar_stdout))
}
