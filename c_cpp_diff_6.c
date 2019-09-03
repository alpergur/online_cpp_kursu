//character literals
//C'de karakter sabitlerinin türü int C++'da ise karakter sabitlerinin türü char
//Aşağıdaki kodu hem C hem de C++ derleyicisi ile derleyin

#include <stdio.h>

int main()
{
	printf("sizeof(char) = %zu\n", sizeof(char));
	printf("sizeof(int)  = %zu\n", sizeof(int));
	printf("%zu\n", sizeof('A'));
	printf("%zu\n", sizeof('\n'));
	printf("%zu\n", sizeof('\x1A'));
	printf("%zu\n", sizeof('\101'));
}
