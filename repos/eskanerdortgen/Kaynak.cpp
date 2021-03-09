#include <iostream>

using namespace std;
//   *   b2 y1|a= 2b+y  //2*(i-1)+1 ortaya kadar //ortadan sonra 2(n-i)+1
//  ***  b1 y3
// ***** b0 y5
//  *** b1 y3
//   *  b2 y1
int main()
{
	int a;
	cout << "boyutu giriniz" << endl;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b, y;
		if (i <= a / 2); {
			y = 2 * i  + 1;
		}
		
		b = (a - y) / 2;
		for (int j = 0; j < y; j++) {
			cout << " ";

		}

	}

}