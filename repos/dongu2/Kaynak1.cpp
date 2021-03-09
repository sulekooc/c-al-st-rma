

using namespace std;

int main() {
	int toplam = 0;

	for (int i = 0; i < 5; i++) {
		int okunan;
		cout << "sayi griniz" << endl;
		cin >> okunan;
		toplam += okunan;
}
	cout << "ortalama:"<<toplam/5  << endl;

}