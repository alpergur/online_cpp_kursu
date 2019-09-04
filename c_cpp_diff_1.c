foo(); //C++'da geçersiz bildirim, C89'da geçerli, C99'da geçersiz bildirim

func()  //C++'da geçersiz bildirim, C89'da geçerli, C99'da geçersiz tanımlama
{
	const x = 1;  //C++'da geçersiz tanımlama, C89'da geçerli, C99'da geçersiz tanımlama
	static y = 2; //C++'da geçersiz tanımlama, C89'da geçerli, C99'da geçersiz tanımlama

	return 1;
}
