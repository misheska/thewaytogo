
#include "runtime.h"
#include "cgocall.h"

void ·_Cerrno(void*, int32);

void
·_Cfunc_GoString(int8 *p, String s)
{
	s = runtime·gostring((byte*)p);
	FLUSH(&s);
}

void
·_Cfunc_GoStringN(int8 *p, int32 l, String s)
{
	s = runtime·gostringn((byte*)p, l);
	FLUSH(&s);
}

void
·_Cfunc_CString(String s, int8 *p)
{
	p = runtime·cmalloc(s.len+1);
	runtime·mcpy((byte*)p, s.str, s.len);
	p[s.len] = 0;
	FLUSH(&p);
}
extern byte *stdout;
void *·_Cvar_stdout = &stdout;


void _cgo_caf82c637269_Cfunc_free(void*);

void
·_Cfunc_free(struct{uint8 x[4];}p)
{
	runtime·cgocall(_cgo_caf82c637269_Cfunc_free, &p);
}

void _cgo_caf82c637269_Cfunc_fputs(void*);

void
·_Cfunc_fputs(struct{uint8 x[12];}p)
{
	runtime·cgocall(_cgo_caf82c637269_Cfunc_fputs, &p);
}

