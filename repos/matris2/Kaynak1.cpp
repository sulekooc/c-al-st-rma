#include <iostream>

using namespace std;
int main()
{
	//0001
	//0010
	//0100
	//1000
	int b;
	cout << "boyutu giriniz" << endl;
	cin >> b;
	for (int i = 0; i < b; i++) {//satýr
		for (int j = 0; j < b; j++) {//sutunr
			cout << "0";
		}
		cout << endl;
	}
}