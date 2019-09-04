
// C89'da fonksiyonların "implicit" (örtülü) bildirimi geçerli.
// C99 standartları ile bu durum geçersiz hale getirildi.
// Ancak C derleyicilerinin hemen hepsi geçmişe doğru uyumluluğu korumak amacıyla bu duruma izin veriyor.

// C++'da "implicit" (örtülü) işlev bildirimi geçerli değil.


void func()
{
	foo();
	//C89'da geçerli implicit olarak  
	//int foo();
	//bildirimi yapılmış kabul ediliyor
	//C99'da geçersiz C++'da geçersiz
}
