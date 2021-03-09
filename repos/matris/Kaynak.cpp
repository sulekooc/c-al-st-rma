#include <iostream>

using namespace std;
int main()
{
	//0001 i=0,j=3 b=4,i+j=b-1 //0001 i=0,j=3 i+j>=b-1 TERS UCGEN UST 
	//0010 i=1,j=2  MATRÝS      //0011 i=1,j=2 |i=1,j=3 ALT UCGEN Ý+J<=b
	//0100 i=2,j=1             //0111 i=2,j=3|i=2,j=2|i=2,j=1
	//1000 i=3,j=0             //1111 i=3,j=3|i=3,j=2|i=3,j=1|i=3,j=0
	int b;
	cout << "boyutu giriniz" << endl;
	cin >> b;
	for (int i = 0; i < b; i++) {//satýr
		for (int j = 0; j < b; j++) {//sutunr
			//if (i+j==b-1)
			//	cout << "1";
		//	else
				//cout << "0";
			if (i + j >= b-1)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	} 
	
}