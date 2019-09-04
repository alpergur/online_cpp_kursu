/* C dilinde farklı türden adresler arasında otomatik tür dönüşümü var, C++ dilinde yok.
	C'de adres türleri ile tamsayı /gerçek sayı türleri arasında otomatik tür dönüşümü var, C++ dilinde yok.
	Böyle otomatik tür dönüşümlerine izin vermek şüphsiz C dilinde de doğru değil.
	Ancak C derleyicisinin kontrol yükümlülüğü yok.
	Böyle otomatik tür dönüşümleri C derleyicilerinin hemen hepsinde lojik kontrole takılır ve tipik olarak bir uyarı mesajı alırız.
*/

void foo()
{
	int x = 10;
	double dval = 1.2;

	int *ptr = x; //C'de geçerli C++'da geçersiz
	ptr = &dval;  //C'de geçerli C++'da geçersiz
	int y = ptr;  //C'de geçerli C++'da geçersiz
}
