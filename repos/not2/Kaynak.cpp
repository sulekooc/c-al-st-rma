/****************************************************************************
**				SAKARYA �N�VERS�TES�
**		B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**		    B�LG�SAYAR M�HEND�SL��� B�L�M�
**	          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI....:1
**				��RENC� ADI......:�ULE KO�
**				��RENC� NUMARASI.:B201210093
**				DERS GRUBU.......:B
****************************************************************************/


#include <iostream>
#include <stdlib.h>
using namespace std;

struct zaman
{
	int saat;
	int dakika;
	int saniye;
	long toplam_saniye;
};
int main() 
{
	zaman t1;

	char ikinokta;

	
	cout << "Saat:Dakika:Saniye Seklinde zamani giriniz " << endl;

	cin >> t1.saat >> ikinokta >> t1.dakika >> ikinokta >> t1.saniye;
	//Saat:Dakika:Saniye bilgisi al�nd�.

	

	if (t1.saat < 0 || t1.saat >= 24) {
		cout << "Girilen saat yanlistir!" << endl;
	}
	if (t1.dakika < 0 || t1.dakika>=60){
		cout << "Girilen dakika yanlistir!" << endl;
	}
	if (t1.saniye < 0 || t1.saniye>=60){
		cout << "Girilen saniye yanlistir!" << endl;
	}

	else {
		cout << "toplam saniye:";

		long toplam_saniye = t1.saat * 3600 + t1.dakika * 60 + t1.saniye;


		cout << toplam_saniye;

	}
	return EXIT_FAILURE;
}