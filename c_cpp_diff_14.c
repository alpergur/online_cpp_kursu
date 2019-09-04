/* 
	C'de (void *) türünden diğer adres türlerine otomatik tür dönüşümü var. C++ dilinde yok.
*/

#include <stdlib.h>

void foo(size_t n)
{
	int *p = malloc(n * sizeof(int)); //C'de geçerli C++'da geçersiz
	//...
}
