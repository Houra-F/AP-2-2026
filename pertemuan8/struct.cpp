#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat{
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct (struct dlm struct)
};

int main(){
    system ("CLS");

    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodepos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "masukkan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "masukkan umur : ";
        cin >> mhs1.umur;

        cout << "masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);

        
    }

    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;

    }
}