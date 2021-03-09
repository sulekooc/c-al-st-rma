#include <iostream>

using namespace std;

int main()
{
	int a;
	a = 1; // ilk deger
	while (a <= 10) //kosul
	{
		cout << "hello" <<a<< endl;
		a++; // adim 

		cout << a << endl;
		
	}
	for (int i = 0; i < 10; i++) {
		cout << "world" << i << endl;
	}
	int x = 1;

	do {
		cout << "sule" << endl;
		x++;
	} while (x < 10);

}
