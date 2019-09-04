/*
	C'de karakter sabitlerinin türü int'tir.C++ dilinde ise karakter sabitlerinin türü char türüdür.

	3 ayrı char türü olduğunu hatırlayınız :
	- char
	- signed char
	- unsigned char

	char türünün işaretli ya da işaretsiz olması derleyiciye bağlıdır.
	Bu durumda karakter sabitleri C++ dilinde işaretli ya da işaretsiz tamsayı türünden olabilir.

	Aşağıdaki kodu C ve C++ derleyicilerinde ayrı ayrı derleyip çalıştırın :
*/

#include <stdio.h>

int main()
{
	printf("%zu\n", sizeof('A'));
	printf("%zu\n", sizeof('\n'));
	printf("%zu\n", sizeof('\x41'));
	printf("%zu\n", sizeof('\102'));
}
