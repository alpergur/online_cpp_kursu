// C'de const nesnelere ilk değer vermek zorunlu değil. C++ dilinde zorunlu.
// C'de sabit ifadeleri ile ilk değerini almış const nesneler sabit ifadesi gereken yerlerde kullanılamıyorlar. C++'da kullanılabiliyorlar.


const int g; //C'de gecerli  C++'da gecersiz
const int ival = 20;   //C'der dış bağlantıya (external linkage) C++'da iç bağlantıya (internal linkage) sahip.

int main()
{
	const int size = 10;
	const int x;   //C'de gecerli (ama yanlis) C++'da gecersiz
	int a[size];   //C'de gecersiz C++'da gecerli
	//...
}
