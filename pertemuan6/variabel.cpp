#include <iostream>
using namespace std;

string variabelGlobal = "Ilmu"; //ini variabel global

void namaVariabel(){
    string variabelLokal = "Komputer"; //contoh variabel lokal

    //coba akses 1
    cout << variabelLokal << endl;

    //coba akses 3
    cout << variabelGlobal << endl;
}

int main(){
    namaVariabel();
    //coba akses 2
    //cout << variabelLokal << endl; //gabisa krna variabel lokal cuma ada di fungsi
    //coba akses 4
    cout << variabelGlobal << endl;
}