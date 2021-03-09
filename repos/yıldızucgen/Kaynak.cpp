#include <iostream>

using namespace std;
//* dik ucgen //   * 3bosluk+1yildiz =a 
//**          //  ** 2b+2y
//***         // ***1b+3y
//****        //**** ob+4y
int main() {
	int a;
	cout << "boyut giriniz" << endl;
	cin >> a;
	//for (int i = 0; i < a; i++) { dik ucgen
		//for (int j = 0; j < i+1; j++) {
			//cout << "*";
		//}
		//cout << endl;
	//}
	//tersdikucgen
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i - 1; j++) //bosluklar 
			cout << " ";
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

}

