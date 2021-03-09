/****************************************************************************
**				SAKARYA ÜNÝVERSÝTESÝ
**		BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**		    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**	          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI....:1
**				ÖÐRENCÝ ADI......:ÞULE KOÇ
**				ÖÐRENCÝ NUMARASI.:B201210093
**				DERS GRUBU.......:B
****************************************************************************/

#include <iostream>


using namespace std;

//Struct tanýmlamasý.
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

	char ikinokta; // karakter tanýmlandý
	bool hata = 0; // doðru,yanlýþ 

	do { // dönügünün en az bir kez açlýþmasý saðlandý
		cout << "Saat:Dakika:Saniye Seklinde zamani giriniz " << endl;

		cin >> zaman.saat >> ikinokta >> zaman.dakika >> ikinokta >> zaman.saniye;   //Saat:Dakika:Saniye bilgisi alýndý.



	//Saat:Dakika:Saniye bilgilerinin geçerlilik testi.
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

	//Toplam saniye hesaplamasý.
	zaman.toplam_saniye = zaman.saat * 3600 + zaman.dakika * 60 + zaman.saniye;


	cout << zaman.toplam_saniye;


	return 1;
}