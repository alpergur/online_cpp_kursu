/*
	C'de diğer aritmetik türlerde  enum türlerine otomatik tür dönüşümü var. C++'da yok.
	C'de farklı enum türleri arasında otomatik tür dönüşümü var. C++'da yok.
*/

enum Pos { Off, On, Hold, StandBy };
enum Color { Red, Green, Black };

void foo(int val)
{
	enum Pos pos = val;
	enum Color c1 = pos; //C'de geçerli C++'da geçersiz
	enum Color c2 = Off; //C'de geçerli C++'da geçersiz
	int x = pos; //C'de de C++'da da geçerli
}
