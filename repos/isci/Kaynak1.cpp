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

	if (x > y && x > z) {
		cout << "enbuyuk:" << x;
		if (y < z)
			cout << "enkucuk:" << y;
		else
			cout << "enkucuk:" << z;
	}
	if (y > x && y > z) {
		cout << "enbuyuk:" << y;
		if (z < x)
			cout << "enkucuk:" << z;
		else
			cout << "enkucuk:" << x;
	}
	if (z > x && z > y) {
		cout << "enbuyuk:" << z;
		if (y < x)
			cout << "enkucuk:" << y;
		else
			cout << "enkucuk:" << x;
	}
}