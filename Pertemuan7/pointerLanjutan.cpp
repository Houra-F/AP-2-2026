// Pointer dalam pointer → Pointer dapat menunjuk ke pointer lain, tidak terbatas menunjuk 
//alamat dari suatu variabel. Dalam pendeklarasiannya hanya menambahkan pointer (*) 
//pada variabel yang akan ditunjuk.

// Pointer dalam array → Konsep array diantaranya adalah banyak loncatan dari
// pointer satu ke pointer yang lain. Karena secara internal array juga menyatakan alamat, 
//yaitu pengenal array sama dengan alamat pada elemen pertama, pada array.

// Pointer dalam string → String pada dasarnya adalah array karakter, sehingga pointer 
//dapat digunakan untuk menunjuk ke karakter pertama dari string. 
//Dengan pointer, kita bisa mengakses atau menelusuri setiap karakter dalam 
//string satu per satu menggunakan operasi pointer.

// Pointer sebagai parameter → Pointer dapat juga digunakan sebagai parameter
// fungsi. Pointer dilewatkan ke dalam fungsi melalui nilainya (passing by value).

#include <iostream>
using namespace std;

//fungsi untuk pointer sebagai parameter

void ubahNilai (int *p){ // p menerima alamat x
    *p = 20; //mengubah isi alamat nya, tp p ubah lagi jadi 20, nnt dipanggil lagi jdnya 20
}

int main(){
    system ("CLS"); 

    // 1. pointer dalam pointer
    cout << "=== Pointer Dalam Pointer ===" << endl;

    int a = 64; // variabel biasa
    int *p = &a; // pointer ke a
    int **pp = &p; // pointer ke pointer p

    cout << "nilai a : " << a << endl; 
    cout << "nilai *p (isi alamat a) : " << *p << endl;
    cout << "nilai **p (isi pointer p) :  " << **pp << endl;

    // 2. pointer dalam aarray
    cout << "=== Pointer Dalam Array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "elemen 1 : (indeks ke 0) " << *ptr << endl;
    cout << "elemen 2 : (indeks ke 1) " << *(ptr + 1) << endl;
    cout << "elemen 3 : (indeks ke 2) " << *(ptr + 2) << endl;

    // 3. pointer dalam string
    cout << "=== Pointer Dalam String ===" << endl;

    char *organisasi = "Ilmu Komputer Laboraty Center";
    cout << "awal : " << organisasi << endl;

    organisasi += 5; //geser pointer
    cout << "geser 5 : " << organisasi << endl; //setelah +5 (spasi jg dibaca)

    // 4. pointer sebagai parameter
    cout << "=== Pointer Dalam Parameter ===" << endl;

    int x = 5; //variabel biasa
    cout << "sebelum : " << x << endl;

    ubahNilai (&x); //fungsi

    cout << "sesudah : " << x << endl;


}