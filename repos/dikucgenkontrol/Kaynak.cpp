#include <iostream>

using namespace std;

int main() {

	int x, y, z;
	cout << "birinci kenari giriniz" << endl;
	cin >> x;
	cout << "ikinci kenari giriniz" << endl;
	cin >> y;
	cout << "ucuncu kenari giriniz" << endl;
	cin >> z;
	if (x * x + y * y == z * z||z*z+y*y==x*x|| z*z+x*x==y*y) {
		cout << "dik ucgendir" << endl;
	}
	else {
		cout << "dik ucgen degildir" << endl;

	}
}