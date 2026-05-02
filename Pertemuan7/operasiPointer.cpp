#include <iostream>
using namespace std;

int main(){
    system ("CLS");

// Operasi Penugasan → pointer juga dapat menerima nilai melalui operasi
// penugasan. Nilai yang dapat disimpan dalam pointer adalah alamat memori dari variabel lain.
// Operasi Aritmatika → suatu variabel pointer hanya dapat dilakukan operasi
// aritmatika dengan nilai integer saja. Operasi yang biasa dilakukan adalah operasi penambahan 
//dan pengurangan.
// Operasi Aritmatika → pointer dapat dibandingkan menggunakan operasi
// logika seperti ==, !=, <, dan >. Perbandingan ini digunakan untuk mengecek apakah 
//dua pointer menunjuk ke alamat memori yang sama atau untuk mengetahui urutan alamat dalam memori.

    // 1. operasi penugasan
    cout << "=== Operasi Penugasan ===" << endl;
    int a = 10;
    int *p;
    p = &a; //pointer simpan alamat a

    cout << "nilai a : " << a << endl; //10
    cout << "alamat a (&a) : " << &a << endl; //alamat variabel a
    cout << "isi pointer p : " << p << endl; //alamat variabel a
    cout << "nilai *p : " << *p << endl; //10 (isi yg ditunjuk oleh si alamat)

    // 2. operasi aritmatika
    cout << "=== Operasi Aritmatika ===" << endl;
    int nilai[3];
    int *oke;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    oke = &nilai[0]; //"oke" skrg menyimpan alamat nilai[0]
    /* ilustrasi (contoh aj)
    nilai[0] -> sedang menyimpan alamat 1000 yg berisi 125
    nilai[1] -> sdg mnyimpan alamat 1002 yg bersisi 345
    nilai[2] -> sdg menyimpan alamat 1005 yg beriri 750
    maka skrg "oke" = sdg menyimpan 1000*/

    cout << "nilai : " << *oke <<  " ada di alamat " << oke << endl;
    cout << "nilai indeks 1 : " << *(oke + 1) << " ada di alamat " << (oke + 1) << endl;
    //krna td di indeks 0 ini jadi 1, itu nmnya pergeseran
    cout << "nilai indeks 2 : " << *(oke + 2) << " ada di alamat " << (oke + 2) << endl;
    //menggeser 2 elemen

    // 3. operasi logika 
    cout << "=== Operasi Logika ===" << endl;
    int x = 5, y = 10;
    int *p1 = &x; // lagi nyimpen alamat x
    int *p2 = &y; // lagi yimpen alamat y
    int *p3 = &x; //lagi nyimpen alamat x

    // jadi p1 dan p3 sama, p2 beda sendiri
    /* ilustrasi (contoh aj)
    alamatnya
    p1 = 1000
    p2 = 2000
    p3 = 1000 */

    if (p1 == p3){
        cout << "p1 dan p3 menunjuk alamat yg sama " << endl;
    }

    if (p1 != p2){
        cout << "p1 dan p2 menunjuk alamat yg berbeda " << endl;
    }

    int *p4 = NULL; //pointer kosong (TDK menunjuk ke mana mana)

    if (p4 == NULL){
        cout << "p4 adalah pointer NULL" << endl;
    }
}

