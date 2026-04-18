#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> nama_mahasiswa = {"nadia", "echa", "carlos", "ilham", "alan"};
    cout << "data awal:" << endl;
    for (int i = 0; i < nama_mahasiswa.size(); i++){
        cout << nama_mahasiswa[i] << endl;
    }

    cout << "tambah data:" << endl;
    nama_mahasiswa.push_back("houra");
    for (int i = 0; i < nama_mahasiswa.size(); i++){
        cout << nama_mahasiswa[i] << endl;
    }

    nama_mahasiswa.erase(nama_mahasiswa.begin() + 1);
    for (int i = 0; i < nama_mahasiswa.size(); i++){
        cout << nama_mahasiswa[i] << endl;
    }

    cout << "data akhir:" << endl;
    nama_mahasiswa.pop_back(); 
    for (int i = 0; i < nama_mahasiswa.size(); i++){
        cout << nama_mahasiswa[i] << endl;
    }

    cout << "Jumlah data tersisa: " << nama_mahasiswa.size() << endl;
}