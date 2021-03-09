#include <iostream>

using namespace std;
 
int main() {

	int yol,hiz;
	cout << "Mesafeyi giriniz" << endl;
	cin >> yol;
	cout << "Hizi giriniz" << endl;
	cin >> hiz;
	cout << "sure:" << yol / hiz;
	int saat = yol / hiz;
	float dakika = (float)yol / hiz -(int) yol / hiz;
	int dakikakismi = dakika * 60;
	cout << "saat ve " << dakikakismi << "dakikadir" << endl;


}