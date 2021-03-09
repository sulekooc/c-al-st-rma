#include <iostream>
using namespace std;
int main()
{
	cout << "Bir iþçi iþi kaç günde bitirmektedir?" << endl;
	int kacgun, kacisci;
	cin >> kacgun;

	cout << "Toplam kaç iþçi çalýþacak ?" << endl;
	cin >> kacisci;

	cout << "Ýþin bitme süresi" << kacgun/kacisci<<"gündür"<<endl;


}


