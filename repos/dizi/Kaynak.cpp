#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sonuc = 0;
	int a[10] = { 1,10,5,7,8,10,11,9,3,0 };
	for (int i = 0; i < 10; i++)
	{
		if ((a[i] % 2) == 0)
			sonuc += 2 * a[i];
	}
	cout << " sonuc :" << sonuc;
	return 0;
}