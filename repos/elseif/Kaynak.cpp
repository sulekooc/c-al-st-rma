#include <iostream>
using namespace std;
int main()
{
	int a = 5, b = -1, c = 3;
	int s;
	if (a == 5)
		s = a * 2 + b++ / 3 + 3 * c / (3 + c);
	else if (b == -1)
		s = a * 2 + b++;
	else if (c == 3)
		s = a * 2 + b++ / 3 + 3 * c / (3 + c);
	else
		s = ++c + b + c;
	cout << s << endl;
}
