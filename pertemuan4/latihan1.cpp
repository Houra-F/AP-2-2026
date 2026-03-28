#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    int i;
    system("CLS");

    cout << "masukkan kalimat: ";
    getline(cin, kalimat); //biar bs terbaca karakter spasi

    for (i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper (kalimat[i]);
    }
    cout << "kalimat dalam huruf kapital: " << kalimat << endl;

    return 0;
}