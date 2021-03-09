#include <iostream>
using namespace std;
int main()
{

	int toplam = 0;
	int sayi = 0;
	int okunan=0;
	for (int i = 0; okunan!=-1; i++) {
		cout << "sayi griniz" << endl;
		cin >> okunan;
		if (okunan == -1)
			break;
		toplam += okunan;
		sayi++;
	}
	sayi--;
	toplam += 1;
	cout << "toplam:" << toplam << endl;
	cout << "sayi" << sayi << endl;
	cout << "ortalama:" << (float)toplam /sayi << endl;
}