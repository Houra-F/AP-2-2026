/*struct = kumpulana variabel dgn tipe data yg berbeda 
tp bs kita kelompokkan dalam satu nama*/
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1;

    mhs1.nama = "Alya";
    mhs1.umur = 18;
    mhs1.ipk = 4;

    cout << "akses dengan titik (.) " << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "Ipk : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; //buat pointer yg menunjuk ke alamat mhs1
    cout << "Akses dengan panah (->) " << endl;
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "Ipk : " << ptrMhs->ipk << endl;


}