#include <iostream>

using namespace std;
int main()
{
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
		cout << "sayilar farkli degildir" << endl;
	else
		cout << "sayilar farklidir" << endl;
	if (x > y) {
		cout << "ilk sayi kücük degildir" << endl;
	}
	else {
		cout << "ikinci sayi kücük degildir" << endl;
	}
}
