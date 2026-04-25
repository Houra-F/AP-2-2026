#include <iostream>
using namespace std;

void sapa(string nama){ //nama adalah parameter formal
    //nama menerima parameter (namaPengguna)
    cout << "Halo " << nama << " Selamat Datang di AP 2!" << endl;
}

int main(){
    string namaPengguna = "Alya"; //namaPengguna adalah parameter aktual

    sapa(namaPengguna); //yg kta pakai parameter aktual

    return 0;
}