#include <iostream>

using namespace std;

int main()
{


	int ogrenciNotu;

	cout << "notunuzu giriniz:";
	cin >> ogrenciNotu;

	if (ogrenciNotu < 0 || ogrenciNotu>100) {
		cout << "aralýktan deger girin" << endl;

	}

	else if (ogrenciNotu >= 70) {
		cout << "gectiniz" << endl;
	}

	else if (ogrenciNotu < 70 && ogrenciNotu >= 50) {
		cout << " bute kaldiniz" << endl;
	}

	else {
		cout << "kaldiniz" << endl;
	}

}


