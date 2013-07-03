#line 4 "c2.go"
#include <stdio.h>
#include <stdlib.h>



// Usual nonsense: if x and y are not equal, the type will be invalid
// (have a negative array count) and an inscrutable error will come
// out of the compiler and hopefully mention "name".
#define __cgo_compile_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];

// Check at compile time that the sizes we use match our expectations.
#define __cgo_size_assert(t, n) __cgo_compile_assert_eq(sizeof(t), n, _cgo_sizeof_##t##_is_not_##n)

__cgo_size_assert(char, 1)
__cgo_size_assert(short, 2)
__cgo_size_assert(int, 4)
typedef long long __cgo_long_long;
__cgo_size_assert(__cgo_long_long, 8)
__cgo_size_assert(float, 4)
__cgo_size_assert(double, 8)

#include <errno.h>
#include <string.h>

void
_cgo_caf82c637269_Cfunc_free(void *v)
{
	struct {
		void* p0;
	} __attribute__((__packed__)) *a = v;
	free(a->p0);
}

void
_cgo_caf82c637269_Cfunc_fputs(void *v)
{
	struct {
		char* p0;
		FILE* p1;
		int r;
	} __attribute__((__packed__)) *a = v;
	a->r = fputs(a->p0, a->p1);
}

