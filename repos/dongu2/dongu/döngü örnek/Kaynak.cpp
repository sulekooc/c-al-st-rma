#include <iostream>

using namespace std;

int main()
{

	int y;
	y = 1;
	while (y < 100)
	{
		cout << y << ",";
		y += 2;
	}
	y = 1;
	while (y < 100) {
		if (y % 2 == 1) {
			cout << y << " ";
		}
		y++;

	}
	

}