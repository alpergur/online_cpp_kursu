/*	C89'da for döngülerinin parantezi içindeki 1. kısımda bildirim yapılamıyor.
	C99 standartları ile böyle bildirimlere olanak sağlandı.
	C++ dilinde ise for döngülerinin birinci kısmında bildirim yapılabiliyor.
	Ancak burada bildirilen isimlerin kapsamlarına(scope'larına ilişkin) C ile C++ dilleri arasında önemli bir kural farklılığı var.
*/

#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; ++i) {
		int i = 876; //c++'da geçersiz
		printf("%d ", i); //876
	}

	return 0;
}
