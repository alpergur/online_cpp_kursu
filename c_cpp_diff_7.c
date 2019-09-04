/* 
	C'de bir enum, union ve struct anahtar sözcükleri ile oluşturulan türler söz konusu olduğunda bildirimde kullanılan "tag" (etiket), 
	değişken bildirimlerinde doğrudan kullanılamıyor (doğrudan türü betimlemiyor)
*/

struct Point {
	int x, y;
};

union Data {
	char c1;
	char c2;
	int x;
};

enum Color { Red, Blue, Black };

Point p = { 1, 3 }; // C'de geçersiz C++'da geçerli
Color c = Black; // C'de geçersiz C++'da geçerli
Data data = { 'A' }; // C'de geçersiz C++'da geçerli
