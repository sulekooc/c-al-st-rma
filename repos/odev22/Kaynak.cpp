#include<iostream>
using namespace std;
void dikdortgenCiz(int a, int b)
{
    for (int i = 1; i <= a; i++)
    {
        cout << "*\t";
    }
    cout << endl;
    for (int i = 1; i <= b - 2; i++)
    {
        cout << "*";
        for (int i = 2; i <= a; i++)
        {
            cout << "\t";
        }
        cout << "*" << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        cout << "*\t";
    }

}

int main()
{
    int a, b;
    cout << "a kenar uzunlugunu giriniz : ";
    cin >> a;
    cout << "b kenar uzunlugunu giriniz : ";
    cin >> b;
    dikdortgenCiz(a, b);

    return 0;
}