#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << " sayi bir" << endl;
	cin >> x;
	cout << " sayi iki" << endl;
	cin >> y;
	cout << " sayi uc" << endl;
	cin >> z;
	 int enbuyuk = x;
	
	if (y > enbuyuk)
		enbuyuk = y;
	if (z > enbuyuk)
		enbuyuk = z;
	 int enkucuk = x;
	if (y < enkucuk)
		enkucuk = y;
	if (z < enkucuk)
		enkucuk = z;
	cout << "enbuyuk:" << enbuyuk << endl;
	cout << " enkucuk:" << enkucuk << endl;

	

}