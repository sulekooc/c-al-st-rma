#include <iostream>
using namespace std;
int main()
{
	cout << "Bir isci isi kac gunde bitirmektedir?" << endl;
	int kacgun, kacisci;
	cin >> kacgun;

	cout << "Toplam kac isci calisacak ?" << endl;
	cin >> kacisci;

	cout << "Ýsin bitme suresi" << kacgun / kacisci << "gundur" << endl;


}

