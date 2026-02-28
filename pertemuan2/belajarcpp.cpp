#include <iostream>
using namespace std;

int main()
{
    int a, b;

    system("CLS");

    //Asiignment operator "=" (ngasih nilai ke dalam variabel)
    a = 3;
    b = 5;

    //Arithmatical operator (operator untuk operasi matematika)
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    //float bagi = a / b; kenapa hasil baginya 0? karena yg dibagi sama" integer
    //solusina adalah buat type casting, yaitu mengubah tipedata
    //secara paksa, agar hasil nya sesuai dgn mau kita
    // float bagi = (float)a / (float)b;
    // int modulo = a % b;

    // cout << "hasil penjumlahan: " << tambah << endl;
    // cout << "hasil pengurangan: " << kurang << endl;
    // cout << "hasil perkalian: " << kali << endl;
    // cout << "hasil pembagian: " << bagi << endl;
    // cout << "hasil sisa bagi: " << modulo << endl;
    

    //Relational operator = operator untung membandingkan nilai dari 2 operand
    //hasil perbandingannya berupa boolean t/f (1/0)
    // cout << (a==b) << endl;
    // cout << (a < b) << endl;
    // cout << (a!=b) << endl;

    //Logical operator (&&, ||, !) = membandingkan dua nilai variabel yg bertipe boolean
    //(booleannya yg dibandingkan)
    // cout << (true && true) << endl;
    // cout << (true && false) << endl;
    // cout << (true || false) << endl;
    // cout << (false || false) << endl;
    // cout << !true << endl;
    // cout << !false << endl;

    //bitwise operator = digunakan untuk operasi biner (&, |, ^, ~, <<, >>)
    /*1 byte terdiri dari 8 bit */
    //cout << (5 & 7) << endl;
    //cout << (5 | 7) << endl;
    //cout << (5 ^ 7) << endl;
    //cout << (~7) << endl;
    //cout << (7 << 2) << endl;
    //cout << (7 >> 2) << endl;

    //operator conditional (?), ternary, kondisi -> hasil 1 ? hasil 2
    //int max;
    //max = (a > b) ? a : b;
    //cout << "nilai terbessar: " << max << endl;

    //shorthand
    //a+=7; //a = a + 7
    //cout << a << endl;

    //increment, decrement 
    //pre increment (otomatis penambahan (++) ada di depan variabel)
    //cout << a << endl; //a = 3
    //cout << ++a << endl; //ada penambahan di a, jadi a = 4

    //post increment (otomatis penambahan(++) ada di belakang variabel)
    //cout << a << endl; //a=3
    //cout << a++ << endl; //a= 3+1 tapi masih disimpan, jadi hrs dipanggil dl
    //cout << a << endl; //keluarlah hasil td = 4

    //pre decrement (--) ada di depan variabel
    //cout << b << endl; //ini masih 5
    //cout << --b << endl; //keuar 4 krna 5-1

    //post decrement (--) ada di belakang variabel
    //cout << b << endl; //masih 5
    //cout << b-- << endl; //masih 5 krn blm dipanggil
    //cout << b << endl; //4





}