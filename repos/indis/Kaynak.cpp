#include <string>
#include <iostream>
using namespace std;

int main()
{
    char charray[80];
    string cumle = "Ali okula gel.";
    int x = cumle.find_first_not_of("Ali ");
    cout << "\n" << "indis :" << x;

    return 0;
}