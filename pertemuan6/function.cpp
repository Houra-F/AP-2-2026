#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan (void)
void tampilkanPesan(){
    cout << "======== Selamat Datang di AP 2! ========" << endl;
}

//fungsi dengan nilai balikan (int, double, float, dsb) 
//punya parameter untuk menerima sesuatu saat di panggil di main program
int tambah(int a, int b){
    return a + b;
}

//fungsi overload, fungsi dengan nama yg sama, tapi parameternya dan tipenya beda
int kali(int a, int b){
    return a * b;
}

double kali(double a, double b){
    return a * b;
}

//fungsi rekursif, fungsi yg memanggil dirinya sendiri (base case, rekursifcase)
int faktorial(int n){ 
    if (n == 0 || n == 1){//base case (langkah dasar) agar rekursif tdk muncul trs menerus
        //ttp jlan sampe dia jumpa 0/1
        return 1;
    }
    else {
        return n * faktorial(n - 1); //recursive case
    }
}


int main(){
    system ("CLS");

    //MEMANGGIL FUNGSI TANPA NILAI BALIKAN
    tampilkanPesan();

    //memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasilTambah = tambah(x,y);
    cout << "hasil penjumlahan = " << hasilTambah << endl;

    //menggunakan fungsi overload
    int hasilKaliInt = kali(x,y);

    //pake yg double
    double n = 3, m = 5;
    double hasilKaliDouble = kali (n,m);

    cout << "hasil perkalian (int) = " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) = " << hasilKaliDouble << endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout << "faktorial dari " << angka  << " adalah " << faktorial(angka) << endl;
    //jadi ini akan trs jalan sampe jumpa 0/1

}