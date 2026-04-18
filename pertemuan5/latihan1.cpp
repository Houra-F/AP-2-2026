#include <iostream>
using namespace std;

int main(){
    //penjumlahan matriks 2 x 2
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    //matriks 1
    cout << "matriks 1 = " << endl; 
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "masukkan elemen baris " << i + 1 << " kolom " << j+1 << " : "<< endl;
            cin >> matriks1[i][j];
        }
    } // i+ 1 agar dimulai dr 1 bukan 0 lagi
    // matriks 2
    cout << "matriks 2 = " << endl; //baris
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "masukkan elemen baris = " << i + 1 << " kolom " << j+1 << " : "<< endl;
            cin >> matriks2[i][j];
        }
    }

    //hasil penjumlahan
    cout << "hasil penjumlahan : " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j];
        }
        cout << endl;
    }
}