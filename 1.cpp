/*
/****************************************************************************
**					         SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				        B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:3
**				��RENC� ADI...............: �ULE KO�
**				��RENC� NUMARASI.:
**				DERS GRUBU����:
****************************************************************************/
*/

#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <Windows.h>
#include <stdio.h>

using namespace std;

struct Okuyucu {    //Okuyucu bilgilerini i�eren struct yap�s�n� olu�turma

    string TC;
    string isim;
    string soyisim;
    string tel_no;
    string dogum_tarihi;
    string gorev;
    int kitap_sayisi;
    string okuyucu_adi;
    string okuyucu_sifre;

};

struct Kitap{       //Kitap bilgilerini i�eren struct yap�s�n� olu�turma

    string kitap_ISBN;
    string kitap_adi;
    string yazar_adi;
    string yazar_soyadi;
    string konu;
    string tur;
    int sayfa;

};

struct Odunc{       //�d�n� kitap bilgilerini i�eren struct yap�s�n� olu�turma

    string odunc_ISBN;
    string odunc_TC;
    string odunc_tarih;
    string odunc_donus;
};

struct Kullanici{   //Kullan�c� bilgilerini i�eren struct yap�s�n� olu�turma

    string kullanici_adi;
    string sifre;
    string giris_saati;
    string cikis_saati;

};


int main()
{

//Sisteme giri� ve kullan�c� kontrol�

    Okuyucu kullanici_giris;
    Kullanici kayitli_kullanici;

    //Kullan�c� ad� ve �ifre girme
    cout << "Lutfen kullanici adi ve sifrenizi girin." << endl;
    cout << "Kullanici adi: ";
    cin >> kullanici_giris.okuyucu_adi;
    cout << endl << "Sifre: ";
    cin >> kullanici_giris.okuyucu_sifre;


    ifstream kullanici_dosyasi_okuma("kullan�c�lar.txt");

    //Dosya okuma
     while (!(kullanici_dosyasi_okuma.eof())){
        kullanici_dosyasi_okuma >> kayitli_kullanici.kullanici_adi >> kayitli_kullanici.sifre >> kayitli_kullanici.giris_saati >> kayitli_kullanici.cikis_saati;



        // Girilen verilerin kay�tla e�le�me kontrol�
        if (kullanici_giris.okuyucu_adi == kayitli_kullanici.kullanici_adi && kullanici_giris.okuyucu_sifre == kayitli_kullanici.sifre){

                //Giri� saati
                time_t yeni_giris = time(0);
                char* string_yeni_giris = ctime(&yeni_giris);
                cout << "Giris yapildi. Giris saati: " << string_yeni_giris << endl;
                cout << endl;
                kayitli_kullanici.giris_saati = string_yeni_giris;



    int islem;

    do{
        //��lem listesi
        cout << "Lutfen yapmak istediginiz islemi secin:" << endl;
        cout << "1- Okuyucu kaydi" << endl;
        cout << "2- Okuyucu kaydi guncelleme" << endl;
        cout << "3- Okuyucu silme" << endl;
        cout << "4- Okuyucu uzerindeki kitaplar" << endl;
        cout << "5- Okuyucu kitap odunc alma" << endl;
        cout << "6- Okuyucu kitap iadesi" << endl;
        cout << "7- Kitap ekleme" << endl;
        cout << "8- Kitap silme" << endl;
        cout << "9- Kitap duzeltme" << endl;
        cout << "0- Cikis" << endl;
        cout << endl;
        cout << "Secilen islem: ";
        cin >> islem;
        cout << endl;
        }while (islem < 0 || islem > 9);


    switch (islem){    //Durum kontrolleri

    case 1: {

        cout<< "-----OKUYUCU KAYDI-----" << endl;

        Okuyucu yeni_okuyucu;
        ofstream okuyucu_dosyasi;
        okuyucu_dosyasi.open("Okuyucu.txt");
        char cevap;
        do{

            //Yeni kay�t
            cout << "Yeni kayit bilgilerini girin." << endl << endl;
                    cout << "TC No : ";
                    cin >> yeni_okuyucu.TC;
                    cout << "Ad : ";
                    cin >> yeni_okuyucu.isim;
                    cout << "Soyad : ";
                    cin >> yeni_okuyucu.soyisim;
                    cout << "Telefon Numarasi : ";
                    cin >> yeni_okuyucu.tel_no;
                    cout << "Dogum Tarihi : ";
                    cin >> yeni_okuyucu.dogum_tarihi;
                    cout << "Gorev : ";
                    cin >> yeni_okuyucu.gorev;
                    cout << "Kullanici Adi : ";
                    cin >> yeni_okuyucu.okuyucu_adi;
                    cout << "Sifre : ";
                    cin >> yeni_okuyucu.okuyucu_sifre;

                    ofstream okuyucu_dosyasi("Okuyucu.txt");


                    // Dosyaya bilgileri yazma
                    okuyucu_dosyasi << yeni_okuyucu.TC << "     " << yeni_okuyucu.isim << "     " << yeni_okuyucu.soyisim << "     " << yeni_okuyucu.tel_no
                    << "     " << yeni_okuyucu.dogum_tarihi << "     " << yeni_okuyucu.gorev << "     "
                    << yeni_okuyucu.okuyucu_adi << "     " << yeni_okuyucu.okuyucu_sifre << endl;

                    cout << endl << "Kayit yapildi.";
                    cout << endl << endl << "Baska kayit yapilacak mi?" << endl << "Evet ise (e/E), hayir ise herhangi bir tusa ve sonra 'enter' tusuna basin. " << endl << endl;
                    cin >> cevap;

        }while (cevap == 'E' || cevap == 'e'); //Yeni kay�t i�in cevap kontrol�


                // ��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                okuyucu_dosyasi.close();
                exit(1);
                break;
    }

    case 2: {

                Okuyucu giren_okuyucu;

                cout << "Kullanici adi :";
                cin >> giren_okuyucu.okuyucu_adi;
                cout << "Sifre : ";
                cin >> giren_okuyucu.okuyucu_sifre;


                Okuyucu yeni_okuyucu;

                ifstream okuyucu_dosyasi_okuma("Okuyucu.txt");
                ofstream okuyucu_dosyasi_yazma("yedek.tmp");

                // Dosyadan bilgileri alma
                while (!okuyucu_dosyasi_okuma.eof())
                {
                    okuyucu_dosyasi_okuma >> yeni_okuyucu.TC >> yeni_okuyucu.isim >> yeni_okuyucu.soyisim >> yeni_okuyucu.tel_no
                                          >> yeni_okuyucu.dogum_tarihi >> yeni_okuyucu.gorev >> yeni_okuyucu.okuyucu_adi >> yeni_okuyucu.okuyucu_sifre;


                    // Kay�tl� kullan�c� kontrol�
                    if (giren_okuyucu.okuyucu_adi == yeni_okuyucu.okuyucu_adi && giren_okuyucu.okuyucu_sifre == yeni_okuyucu.okuyucu_sifre)
                    {
                        time_t simdi = time(0);
                        char* string_simdi = ctime(&simdi);
                        cout << "Giris yapildi. Giris saati: " << string_simdi << endl;
                        cout << endl;

                        // Kay�tl� bilgileri g�sterme
                        cout << "----- OKUYUCU KAYDI GUNCELLEME-----" << endl << endl;
                        cout << "Kayitli bilgiler:" << endl;
                        cout << yeni_okuyucu.TC << endl;
                        cout << yeni_okuyucu.isim << endl;
                        cout << yeni_okuyucu.soyisim << endl;
                        cout << yeni_okuyucu.tel_no << endl;
                        cout << yeni_okuyucu.dogum_tarihi << endl;
                        cout << yeni_okuyucu.gorev << endl;
                        cout << yeni_okuyucu.okuyucu_adi << endl;
                        cout << yeni_okuyucu.okuyucu_sifre << endl << endl;

                        // Yeni bilgileri girme
                        cout << "Yeni bilgileri giriniz: " << endl;
                        cout << "TC No : ";
                        cin >> yeni_okuyucu.TC;
                        cout << "Ad : ";
                        cin >> yeni_okuyucu.isim;
                        cout << "Soyad : ";
                        cin >> yeni_okuyucu.soyisim;
                        cout << "Telefon No : ";
                        cin >> yeni_okuyucu.tel_no;
                        cout << "Dogum Tarihi : ";
                        cin >> yeni_okuyucu.dogum_tarihi;
                        cout << "Gorev : ";
                        cin >> yeni_okuyucu.gorev;
                        cout << "Kullanici adi : ";
                        cin >> yeni_okuyucu.okuyucu_adi;
                        cout << "Sifre : ";
                        cin >> yeni_okuyucu.okuyucu_sifre;
                        cout << endl;

                        //Yeni bilgileri yazma
                        okuyucu_dosyasi_yazma << yeni_okuyucu.TC << "     " << yeni_okuyucu.isim << "     " << yeni_okuyucu.soyisim << "     "
                                              << yeni_okuyucu.tel_no << "     " << yeni_okuyucu.dogum_tarihi << "     " << yeni_okuyucu.gorev << "     "
                                              << yeni_okuyucu.okuyucu_adi << "     " << yeni_okuyucu.okuyucu_sifre << endl;
                        break;
                    }

                    else
                    {
                        //Silinmeyecek kay�tlar� yedekleme
                        okuyucu_dosyasi_yazma << yeni_okuyucu.TC << "     " << yeni_okuyucu.isim << "     " << yeni_okuyucu.soyisim << "     "
                                              << yeni_okuyucu.tel_no << "     " << yeni_okuyucu.dogum_tarihi << "     " << yeni_okuyucu.gorev << "     "
                                              << yeni_okuyucu.okuyucu_adi << "     " << yeni_okuyucu.okuyucu_sifre << endl;
                    }
                }

                //Dosyalar� kapatma ve yedek dosyanin ismi ile orijinal dosyanin ismini de�i�tirme
                okuyucu_dosyasi_okuma.close();
                okuyucu_dosyasi_yazma.close();
                remove("Okuyucu.txt");
                rename("yedek.tmp", "Okuyucu.txt");
                cout << "Kayit guncellendi." << endl;

                //��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                exit(1);




                break;
            }

    case 3:{
                Okuyucu mevcut;
                Okuyucu silinecek;


                cout << "-----OKUYUCU SILME-----" << endl;
                cout << "Kullanici adi :" ;
                cin >> mevcut.okuyucu_adi;
                cout << "Sifre : " ;
                cin >> mevcut.okuyucu_sifre;
                cout << endl;


                ifstream okuyucu_dosyasi_okuma("Okuyucu.txt");
                ofstream okuyucu_dosyasi_yazma("okuyucu.tmp");

                //Dosya okuma
                while (!okuyucu_dosyasi_okuma.eof()){
                    okuyucu_dosyasi_okuma >> silinecek.TC >> silinecek.isim >> silinecek.soyisim >> silinecek.tel_no >> silinecek.dogum_tarihi >> silinecek.gorev
                    >> silinecek.okuyucu_adi >> silinecek.okuyucu_sifre;
                }

                    //Girilen verileri kay�tlarla e�le�tirme
                    if (mevcut.okuyucu_adi==silinecek.okuyucu_adi && mevcut.okuyucu_sifre==silinecek.okuyucu_sifre)
                    {
                        //Silinecek kayd� ekranda g�sterme
                        cout << "Kay�tl� bilgiler:" << endl;
                        cout << endl;
                        cout << "TC: " <<silinecek.TC << endl;
                        cout << "�sim: " << silinecek.isim << endl;
                        cout << "Soyisim: " << silinecek.soyisim << endl;
                        cout << "Telefon: " << silinecek.tel_no << endl;
                        cout << "Dogum Tarihi: " << silinecek.dogum_tarihi << endl;
                        cout << "Gorev: " << silinecek.gorev  << endl;
                        cout << "Kullanici Adi: " << silinecek.okuyucu_adi << endl;
                        cout << "Sifre: " << silinecek.okuyucu_sifre << endl;
                        cout << endl;
                    }
                    else
                    {
                        //Silinmeyecek kayitlari yedek dosyaya kaydetme
                        okuyucu_dosyasi_yazma << silinecek.TC << "     " << silinecek.isim << "     " << silinecek.soyisim << "     " << silinecek.tel_no
                         << "     " << silinecek.dogum_tarihi << "     " << silinecek.gorev << "     " << silinecek.okuyucu_adi << "     "
                         << silinecek.okuyucu_sifre << endl ;
                    }

                //Dosyalari kapatma

                okuyucu_dosyasi_yazma.close();
                okuyucu_dosyasi_okuma.close();

                //Orijinal dosyayi silme.
                remove("Okuyucu.txt");

                //Yedek dosyanin ismi ile orijinal dosyanin ismini de�i�tirme
                rename("okuyucu.tmp", "Okuyucu.txt");
                cout << "Kayit basariyla silindi." << endl;


                // ��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                exit(1);





        break;
    }

    case 4:{

                Okuyucu mevcut;
                Kitap kayitli;
                Odunc odunc_kitap;

                cout << "-----OKUYUCU UZERINDEKI KITAPLAR-----" << endl;
                cout << "TC: " << endl;
                cin >> mevcut.TC;


                ifstream odunc_dosya_oku("Odunc.txt");

                //Odunc.txt'den bilgileri okuma
                while (!odunc_dosya_oku.eof())
                {
                    odunc_dosya_oku >> odunc_kitap.odunc_ISBN >> odunc_kitap.odunc_TC;
                    if (mevcut.TC == odunc_kitap.odunc_TC)    // Okuyucuya ait �d�n� listesi bulma
                    {
                        //Kitaplar.txt'den bilgileri okuma
                        ifstream kitap_dosya_oku("Kitaplar.txt");
                        kitap_dosya_oku >> kayitli.kitap_ISBN >> kayitli.kitap_adi >> kayitli.yazar_adi >> kayitli.yazar_soyadi >> kayitli.konu >> kayitli.tur >> kayitli.sayfa;

                        if (kayitli.kitap_ISBN == odunc_kitap.odunc_ISBN)   //�d�n� listesindeki kitaplar� bulma
                        {

                            cout << "ISBN: " << kayitli.kitap_ISBN << endl;
                            cout << "Kitap adi: " << kayitli.kitap_adi << endl;
                            cout << "Yazar adi: " << kayitli.yazar_adi << " " << kayitli.yazar_soyadi << endl;
                            cout << "Kitabin konusu: " << kayitli.konu << endl;
                            cout << "Kitabin turu: " << kayitli.tur << endl;
                            cout << "Sayfa sayisi: " << kayitli.sayfa << endl;


                        }
                        else
                        {
                            cout << "Kitap bulunamadi." << endl << endl;

                            //��k�� saati ve program� sonland�rma
                            time_t yeni_cikis = time(0);
                            char* string_yeni_cikis = ctime(&yeni_cikis);
                            cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                            cout << endl;
                            kayitli_kullanici.cikis_saati = string_yeni_cikis;


                            //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                            ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                            kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                                  << kayitli_kullanici.cikis_saati << endl;

                            exit(1);

                        }
                    }
                }
            }

    case 5:{

                Odunc odunc_kitap;

                ofstream odunc_dosya_yazma;
                odunc_dosya_yazma.open("Odunc.txt");                    //Odunc.txt'yi a�ma
                cout << "-----OKUYUCU KITAP ODUNC ALMA-----" << endl;
                char cevap;

                do{

                    //�d�n� kitap bilgileri girme
                    cout << "TC: ";
                    cin >> odunc_kitap.odunc_TC;
                    cout << endl;
                    cout << "Kitap ISBN: ";
                    cin >> odunc_kitap.odunc_ISBN;
                    cout << endl << endl;


                    //�d�n� al�nan kitab� Odunc.txt'ye yazma
                    ofstream odunc_dosya_yazma("Odunc.txt");
                    odunc_dosya_yazma << odunc_kitap.odunc_TC << "     " << odunc_kitap.odunc_ISBN << endl;

                    cout << "Odunc aldiginiz kitap kaydedildi." << endl;;
                    cout << endl << "Baska kayit yapilacak mi?" << endl << "Evet ise (e/E), hayir ise herhangi bir tusa ve sonra 'enter' tusuna basin. " << endl << endl;;
                    cin >> cevap;


                }while (cevap == 'e' || cevap == 'E');  //Yeni kay�t i�in cevap kontrol�

                    //��k�� saati ve program� sonland�rma
                    time_t yeni_cikis = time(0);
                    char* string_yeni_cikis = ctime(&yeni_cikis);
                    cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl << endl;
                    kayitli_kullanici.cikis_saati = string_yeni_cikis;

                    //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                    ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                    kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                          << kayitli_kullanici.cikis_saati << endl;

                    exit(1);


            break;
            }

    case 6:{

                Okuyucu mevcut;
                Odunc verilen;

                cout << "-----OKUYUCU KITAP IADESI-----" << endl;
                cout << "TC: ";
                cin >> mevcut.TC;
                ifstream odunc_dosya_okuma("Odunc.txt");
                ofstream odunc_dosya_yazma("odunc.tmp");

                //Dosya okuma
                while (!odunc_dosya_okuma.eof())
                {
                    odunc_dosya_okuma >> verilen.odunc_TC >> verilen.odunc_ISBN;
                    if (mevcut.TC == verilen.odunc_TC)  //Girilen verileri kay�tla e�le�tirme
                    {
                        //Silinecek kayd� belirtme
                        cout << "Dosya kaydi:" << endl;
                        cout <<"Kullanici TC: " << verilen.odunc_TC << endl;
                        cout <<"Kitap ISBN: " <<  verilen.odunc_ISBN << endl;
                        break;

                    }
                    else
                    {
                        //Silinmeyecek verileri yedekleme
                        odunc_dosya_yazma << verilen.odunc_TC << "     " << verilen.odunc_ISBN << endl;
                    }
                }

                //Dosyalar� kapatma
                odunc_dosya_yazma.close();
                odunc_dosya_okuma.close();

                //Orijinal dosyay� silme.
                remove("Odunc.txt");

                //Yedek dosyan�n ismini orijinal dosyanin ismi ile de�i�tirme
                rename("odunc.tmp", "Odunc.txt");
                cout << "Kitap geri verildi." << endl << endl;

                //��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                exit(1);

                break;
            }

    case 7:{
                Kitap eklenecek;

                ofstream kitap_dosya_yazma;
                kitap_dosya_yazma.open("Kitaplar.txt");     //Dosya a�ma
                char cevap;

                do{
                    // Eklenecek kitap bilgilerini girme
                    cout << "-----KITAP EKLEME-----" << endl;
                    cout << "Eklenecek kitap bilgileri:" << endl;
                    cout << endl<< "ISBN : ";
                    cin >> eklenecek.kitap_ISBN;
                    cout << endl << "Kitap Ismi : ";
                    cin >> eklenecek.kitap_adi;
                    cout << endl << "Yazarin Adi : ";
                    cin >> eklenecek.yazar_adi;
                    cout << endl << "Yazarin Soyadi : ";
                    cin >> eklenecek.yazar_soyadi;
                    cout << endl << "Kitabin Konusu : ";
                    cin >> eklenecek.konu;
                    cout << endl << "Kitabin Turu : ";
                    cin >> eklenecek.tur;
                    cout << endl << "Kitabin Sayfa Sayisi : ";
                    cin >> eklenecek.sayfa;

                    //Girilen bilgileri Kitaplar.txt'ye yazma
                    kitap_dosya_yazma << eklenecek.kitap_ISBN << "     " << eklenecek.kitap_adi << "     " << eklenecek.yazar_adi << "     " << eklenecek.yazar_soyadi
                             << "     " << eklenecek.konu << "     " << eklenecek.tur << "     " << eklenecek.sayfa << endl;

                    cout << "Kitap eklendi." << endl;
                    cout << endl << endl << "Baska kayit yapilacak mi?" << endl << "Evet ise (e/E), hayir ise herhangi bir tusa ve sonra 'enter' tusuna basin. " << endl << endl;
                    cin >> cevap;

                } while (cevap == 'e' || cevap == 'E'); // Yeni kay�t i�in cevap kontrol�

                // ��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                kitap_dosya_yazma.close();      //Dosya kapatma
                exit(1);


                break;

            }

    case 8:{

        string silinecek_isbn;
        Kitap silinecek;

                cout << "-----KITAP SILME-----" << endl;
                cout << "Kitap ISBN :" ;
                cin >> silinecek_isbn;      //Silinecek kitab� belirtme

                ifstream kitap_dosyasi_okuma("Kitap.txt");
                ofstream kitap_dosyasi_yazma("Kitap.tmp");

                //Dosya okuma
                while (!kitap_dosyasi_okuma.eof()){
                    kitap_dosyasi_okuma >> silinecek.kitap_ISBN >> silinecek.kitap_adi >> silinecek.yazar_adi >> silinecek.yazar_soyadi >> silinecek.konu >> silinecek.tur
                                      >> silinecek.sayfa;
                }

                if (silinecek_isbn == silinecek.kitap_ISBN){       //Girilen veri ile kay�tlar� e�le�tirme

                    //Kay�tl� bilgileri g�sterme
                    cout << "Kayitli bilgiler: " << endl;
                    cout << silinecek.kitap_ISBN << endl;
                    cout << silinecek.kitap_adi << endl;
                    cout << silinecek.yazar_adi << " " << silinecek.yazar_soyadi << endl;
                    cout << silinecek.konu << endl;
                    cout << silinecek.tur << endl;
                    cout << silinecek.sayfa << endl;
                }

                else{
                    //Silinmeyecek dosyalar� yedekleme
                    kitap_dosyasi_yazma << silinecek.kitap_ISBN << "     " << silinecek.kitap_adi << "     " << silinecek.yazar_adi << "     " << silinecek.yazar_soyadi
                                      << "     " << silinecek.konu << "     " << silinecek.tur << "     " << silinecek.sayfa << endl;
                }

                //Dosyalar� kapatma
                kitap_dosyasi_yazma.close();
                kitap_dosyasi_okuma.close();

                // Orijinal dosyay� silme
                remove("Kitap.txt");

                //Yedek dosyanin ismi ile orijinal dosyanin ismini de�i�tirme
                rename("Kitap.tmp", "Kitap.txt");
                cout << "Kayit silindi." << endl;


                //��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                exit(1);
        break;
        }


    case 9:{

                Kitap kayitli;
                string giris_isbn;

                    cout << "Kitap ISBN: ";
                    cin >> giris_isbn;          //D�zeltilecek kitab� belirtme

                    ifstream kitap_dosya_okuma("Kitaplar.txt");
                    ofstream kitap_dosya_yazma("kitaplar.tmp");

                    //Dosya okuma
                    while (!kitap_dosya_okuma.eof()){

                        kitap_dosya_okuma >> kayitli.kitap_ISBN >> kayitli.kitap_adi >> kayitli.yazar_adi >> kayitli.yazar_soyadi >> kayitli.konu >> kayitli.tur
                                          >> kayitli.sayfa;

                            if (giris_isbn==kayitli.kitap_ISBN) //Girilen veri ile kay�t e�le�tirme
                            {
                                //Kay�tl� bilgileri g�sterme
                                cout << "-----KITAP DUZELTME-----" << endl << endl;
                                cout << "Kayitli bilgiler: " << endl;
                                cout << kayitli.kitap_ISBN << endl;
                                cout << kayitli.kitap_adi << endl;
                                cout << kayitli.yazar_adi << " " << kayitli.yazar_soyadi << endl;
                                cout << kayitli.konu << endl;
                                cout << kayitli.tur << endl;
                                cout << kayitli.sayfa << endl;

                                //Yeni bilgileri girme
                                cout << "Yeni bilgiler: " << endl;
                                cout << "ISBN : ";
                                cin >> kayitli.kitap_ISBN;
                                cout << "Kitap Ismi : ";
                                cin >> kayitli.kitap_adi;
                                cout << "Yazarin Adi : ";
                                cin >> kayitli.yazar_adi;
                                cout << "Yazarin Soyadi : ";
                                cin >> kayitli.yazar_soyadi;
                                cout << "Kitabin Konusu : ";
                                cin >> kayitli.konu;
                                cout << "Kitabin Turu : ";
                                cin >> kayitli.tur;
                                cout << "Kitabin Sayfa Sayisi : ";
                                cin >> kayitli.sayfa;
                                cout << endl;

                                //Yeni bilgileri dosyaya yazma
                                kitap_dosya_yazma << kayitli.kitap_ISBN << "     " << kayitli.kitap_adi << "     " << kayitli.yazar_adi << "     "
                                                  << kayitli.yazar_soyadi << "     " << kayitli.konu << "       " << kayitli.tur << "        " << kayitli.sayfa << endl;

                                break;
                            }
                            else
                            {
                                //Silinmeyecek kay�tlar� yedekleme
                                kitap_dosya_yazma << kayitli.kitap_ISBN << "     " << kayitli.kitap_adi << "     " << kayitli.yazar_adi << "     "
                                                  << kayitli.yazar_soyadi << "     " << kayitli.konu << "       " << kayitli.tur << "        " << kayitli.sayfa << endl;
                            }
                        }

                        //Dosyalar� kapatma
                        kitap_dosya_yazma.close();
                        kitap_dosya_okuma.close();

                        //Orijinal dosyay� silme
                        remove("Kitaplar.txt");

                        //Yedek dosyan�n ismini orijinal dosya ile de�i�tirme
                        rename("kitaplar.tmp", "Kitaplar.txt");
                        cout << "Kitap duzeltildi." << endl;


                        //��k�� saati ve program� sonland�rma
                        time_t yeni_cikis = time(0);
                        char* string_yeni_cikis = ctime(&yeni_cikis);
                        cout << endl << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl << endl;
                        kayitli_kullanici.cikis_saati = string_yeni_cikis;

                        //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                        ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                        kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                              << kayitli_kullanici.cikis_saati << endl;

                        exit(1);


                        break;
            }


    case 0:{
                //��k�� saati ve program� sonland�rma
                time_t yeni_cikis = time(0);
                char* string_yeni_cikis = ctime(&yeni_cikis);
                cout << "Cikis yapildi. Cikis saati: " << string_yeni_cikis << endl;
                cout << endl;
                kayitli_kullanici.cikis_saati = string_yeni_cikis;

                //Giri� ve ��k�� saatlerini kullan�c�lar.txt'ye yazma
                ofstream kullanici_dosya_yazma("kullan�c�lar.txt");
                kullanici_dosya_yazma << kayitli_kullanici.kullanici_adi << "     " << kayitli_kullanici.sifre << "     " << kayitli_kullanici.giris_saati << "     "
                                      << kayitli_kullanici.cikis_saati << endl;

                exit(1);


     break;
     }

                }
            }

        else{
                //Uyar� ve program� sonland�rma
                cout << "Kullanici bulunamadi.";
                exit(1);
        }

        }


    return 0;
}
