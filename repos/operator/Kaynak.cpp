#include <iostream>

using namespace std;
int main()
{
	int x, y;

	cout << "birinci sayiyi giriniz" << endl;
	cin >> x;
	cout << "ikinci sayiyi giriniz" << endl;
	cin >> y;

	if (x == y) {
		cout << "sayilar esittir" << endl;
	}
	else {
		cout << "sayilar esit degildir" << endl;
	}
	if (x != y)
		cout << "sayilar farklidir" << endl;
	else
		cout << "sayilar farkli degldir" << endl;
	if (x > y) {
		cout << "ilk sayi kucuk degildir" << endl;
	}
	else {
		cout << "ikinci sayi kucuktur" << endl;
	}
	if (x < y) {
		cout << "ilk sayi kucuktur" << endl;
	}
	else {
		cout << "ikinci sayi kucuk degildir" << endl;
	}
	if (x <= y) {
		cout << "ilk sayi kucuk esittir" << endl;
	}
	else {
		cout << "ilk sayi kucuk esittir" << endl;
	}

}
