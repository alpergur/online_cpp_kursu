//C'de sabit ifadesi gereken yerlerden bazılarında C++'da sabit ifadesi gerekmiyor

#include <stdio.h>

int x = 10;
//int y = x;  //C'de gecersiz C++'da gecerli

struct Nec {
	int m1 : 3;
	//int m2 : x; //hem C'de hem C++'da geçersiz
};

int main()
{
	int i1 = 10, i2 = 20, i3 = 30;
	int a[] = { i1, i2, i3 }; //C'de gecersiz (compiler extensions) C++'da geçerli
	//static int sx = i1; //C'de gecersiz C++'da gecerli

	switch (i1) {
		case 0 : printf("gecerli\n"); break;
		//case i1: printf("gecersiz\n"); break; //hem C'de hem C++'da gecersiz
	}
	
}
