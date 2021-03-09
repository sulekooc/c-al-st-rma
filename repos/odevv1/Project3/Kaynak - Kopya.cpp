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


using namespace std;

//Struct tan�mlamas�.
struct zaman
{
	int saat;
	int dakika;
	int saniye;
	long toplam_saniye;
};
int main()
{
	zaman zaman;

	char ikinokta; // karakter tan�mland�
	bool hata = 0; // do�ru,yanl�� 

	do { // d�n�g�n�n en az bir kez a�l��mas� sa�land�
		cout << "Saat:Dakika:Saniye Seklinde zamani giriniz " << endl;

		cin >> zaman.saat >> ikinokta >> zaman.dakika >> ikinokta >> zaman.saniye;   //Saat:Dakika:Saniye bilgisi al�nd�.



	//Saat:Dakika:Saniye bilgilerinin ge�erlilik testi.
		if (zaman.saat < 0 || zaman.saat >= 24) {
			cout << "Girilen saat degeri " << zaman.saat << " yanlis girilmistir!" << endl;
			hata = 1;
		}
		if (zaman.dakika < 0 || zaman.dakika >= 60) {
			cout << "Girilen dakika degeri " << zaman.dakika << " yanlis girilmistir!" << endl;
			hata = 1;
		}
		if (zaman.saniye < 0 || zaman.saniye >= 60) {
			cout << "Girilen saniye degeri " << zaman.saniye << " yanlis girilmistir!" << endl;
			hata = 1;
		}

	} while (hata);
	cout << "toplam saniye:";

	//Toplam saniye hesaplamas�.
	zaman.toplam_saniye = zaman.saat * 3600 + zaman.dakika * 60 + zaman.saniye;


	cout << zaman.toplam_saniye;


	return 1;
}