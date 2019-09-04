/*	
	T herhangi bir tür olmak üzere, C'de (const T *) türünden (T *) türüne otomatik tür dönüşümü var. 
	C++ dilinde yok.
*/

void foo(void)
{
	const int x = 10;
	int y = 20;

	int *ptr = &x; //C'de geçerli C++'da geçersiz
	const int *p = &y;

	ptr = p; //C'de geçerli C++'da geçersiz
}
