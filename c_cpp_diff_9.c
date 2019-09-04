/*

	const ve static anahtar sözcüklerinin pointer parametre değişkenleriyle kullanımı
	Aşağıdaki bildirimler C'de geçerli C++'da geçersiz

*/

int f1(int p[const]);     // C'de int foo(const int *p) anlamında. C++'dagecersiz
int f2(char s[static 5]); // C'deki anlamı uzunluğu en az 5 olan bir yazı adresi bekleniyor. C++'da geçersiz
