#include <iostream>

using namespace std;

int main() {
	int x, y, z;

	cout << "Birinci Kenari Giriniz" << endl; 
	cin >> x;

	cout << "Ýkinci Kenari Giriniz" << endl;
	cin >> y;
	z = sqrt(x * x + y * y);
		cout << "h=" << z<<endl;
	cout << "cevresi=" << x+y+z<< endl;
	cout << "alani=" << (float)x * y / 2 << endl;



 }