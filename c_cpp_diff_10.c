/*
	C'de kullanımdan düşmüş olan auto anahtar sözcüğünün C++ dilindeki anlamı farklı.
	Aşağıdaki kod C'de geçerli ancak C++'da geçersiz :
	auto C++ dilinin en sık kullanılan anahtar sözcüklerinden bir.
	auto anahtar sözcüğü "Tür çıkarımı" (type deduction) denilen araç seti ile ilgili.
	Tür çıkarımı C++ dilinin en önemli araçlarından biri.
*/

void func()
{
	auto int x; //C'de geçerli C++'da geçersiz
	auto int y = 10;  //C'de geçerli C++'da geçersiz
	//...
}
