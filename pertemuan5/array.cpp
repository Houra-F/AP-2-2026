#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    //deklarasi dan inisialisasi array
    // 2 cara membuat array

    //cara 1 : array kosong (array yg masih kosong)
    //isi manual
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "parul";
    // nama[2] = "hana";
    // nama[3] = "dewi";
    // nama[4] = "fadhil";

    //cara 2 : array langsung diisi
    //A = 
    //string nama[5] = {"Alya", "Parul", "Hana", "Dewi","Fadhil"};
    //B = 
    //string nama[5] = {"Alya", "Parul", "Hana", "Dewi","Fadhil"};

    //menampilkan array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;

    //menggunakan looping ascending
    // for (int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }

    //looping descending
    // for (int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    //multidimensional array
    //baris 1 2 3
    //kolom 4 5 6
    //2 baris 3 kolom

//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<2; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

    //string (array of char)
    // string nama = "alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length(); //menghitung jumlah karakter/huruf

    // string s1 = "hello";
    // string s2 = "world";
    // //1. s1 = s2
    // s1 = s2;
    // cout << "s1 skrg = " << s1 << endl;
    // //2. s1 = s1 + s2
    // s1 = "hello"; //riset nilai
    // cout << "hasil gabungan = " << s1 + s2 << endl;
    // //3. s1.length()
    // cout << s1.length() << endl; //5
    // cout << (s1 + s2).length() << endl; //10
    // //4. s1.substr(n,m) n itu mulai dr brp m itu panjangnya brp
    // cout << s1.substr(2,3) << endl;

    //operator sizeof (untuk melihat ukuran memori dalam bite)
    // int angka = 10;
    // cout << sizeof(angka) << endl; // biasa di sediakan 4 bite

    // int niai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai) / sizeof(nilai[0]);

    //array library
    //misal array biasa : float nilai[5]

//     array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
//     cout << "nilai : ";

//     for (int i = 0; i < nilai.size(); i++){
//         cout << nilai[i] << " ";
//     }

        
}