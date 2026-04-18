//vektor = menyimpan banyak data yg sejenis to ukurannya dpt berkurang/bertambah
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //deklarasi dan inisialisasi vektor
    vector<string> nama_karyawan = {"alya", "parul", "hana", "dewi", "fadhil"};

    // //menampilkan data ascending
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    //menampilkan data descending
    // for (int i = 4; i <= nama_karyawan.size(); i--){
    //     cout << nama_karyawan[i] << endl;
    // }

    //add data to vector (nambahin data ke vektor dr blkg)
    //jd masuk ke data terakhir
    // nama_karyawan.push_back("edric");
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    //delete data dari vektor
    // nama_karyawan.pop_back(); //hapus dr belakang
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }
    //milih yg mau di hapus 
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
}

