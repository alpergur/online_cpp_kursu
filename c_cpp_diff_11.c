/*
	C dilinde goto deyimi ile programın akışı bir bir değişkene ilk değer veren bildirimi atlayabilir.
	C++ dilinde bu durumu geçersiz.
	C++ dilinde switch ya da goto deyimleriyle nesne tanımlamalarının üstünden atlayamıyoruz.
	Aşağıdaki örnek kod C'de geçerli ama C++ dilinde geçersiz.
*/

void func(void)
{
	goto nec;
	int i = 0;
nec:
	;
}
