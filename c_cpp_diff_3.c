/*
	C89'da implicit int (gizli int - örtülü int - kapalı int) kuralı geçerli.
	C99 standartları ile bu durum geçersiz kılındı.
	C++ dilinde "implicit int" geçerli değil.
	C99/11 derleyicileri, geçmişe doğru uyumluluğu korumak için bir "diagnostic" (bulgu iletisi) vererek kodu derleyebilir.
	Derleyicinizin switch'lerini inceleyiniz.
	C89 standartlarına göre yukarıdaki kodda
	- bildirilen foo işlevinin gerei dönüş değeri türü int
	- tanımlanan func işlevinin geri dönüş değeri türü int
	- func işlevi içinde tanımlanan x ve y değişkenlerinin türü int
*/

foo(); //C++'da geçersiz

func()  //C++'da geçersiz
{
	const x = 1;  //C++'da geçersiz
	static y = 2; //C++'da geçersiz
	///
	return 1;
}
