#include <iostream>
using namespace std;

int main()
{
    //goto label = melompat dr satu bagian ke bagian lain
    //kita tandai dengan label
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    //->Hello World, IKLC, Ilmu Komputer, FaSilkom-TI

    // a:
    //  cout << "Hello World" << endl;
    //  goto d;
    // b:
    //  cout << "Failkom-TI" << endl;
    //  return 0;
    // c:
    //  cout << "Ilmu Komputer" << endl;
    //  goto b;
    // d:
    //  cout << "IKLC" << endl;
    //  goto c;

    //menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if(i % 2 == 0) {
    //     cout << i <<" ";
    // } i--;
    // if ( i>=2 ){
    //     goto genap;
    // }

    //statement while
    //int i = 1;
    // while ( i <= 10){ //ttp ngulang sampai false, falsenya itu i > 10
    //      if ( i % 2 == 0)
    //      cout << i << " ";
    // } i++;

    //statement do while = jalan paling tidak sekali meskipun dalam kondisi yg salah
    // int i = 1;
    // do {
    //     cout << i << " ";
    // } while (i <= 0); //1 <= 0? false, maka yg keluar di terminal hanya yg disuruh do yaitu ( 1)

    //statement for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i += 2){
    //     cout << "hello world" << endl;
    // }

    //nested for (ada perulangan dlm perulangan)
    // * * * * * 5 x 5 ( 5 kebawa 5 kesamping)
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 5; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //segitiga siku siku
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }



}