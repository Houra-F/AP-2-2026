#include <iostream> //header standar c++, conio.h (utk fungsi getch), stdio.h(c)
#include <conio.h> //header untuk getche() dan getch()
// getche (get character and echo, baca dan tampilkan)
using namespace std;

int main()
{
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    cout << "Hello world" << endl;

    cout << "Masukkan nama: ";
    // cin >> nama; spasi ga terbaca
    getline(cin, nama); //spasi terbaca

    cout << "Masukkan kom: ";
    cin >> kom;

    cout << "Masukkan nim: ";
    cin >> nim;

    cout << "Masukkan ip: ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P): ";
    jenisKelamin = getche(); //agar karakter lgsg tampil gprlu tekan enter


    /* ini untuk output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenisKelamin << endl;
    // putchar << menampilkan karakter untuk char
    putchar (jenisKelamin);

    getch() //karakter yg diketik tidak ditampilkan di layar
}