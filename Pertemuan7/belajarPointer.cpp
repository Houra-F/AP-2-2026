#include <iostream>
using namespace std;
//pointer = variabel yg menyimpan alamat dari variabel lain
//bukan menyimpan isi data, pointer menyimpan dmn data itu berada
//& mengahsilkan alamat dari operannya
//cth int a = 10;
//int *p = &a;
//(pointer p manggil alamat a bkn lgsg 10)
//* = nah klo mau manggil si 10 caranya printf("%d", *p), maka yg dipanggil 10
int main(){
    system ("CLS");

    //pointer declaration
    int number = 35;
    int *pointer_number = &number;

    cout << "isi variabel number : " << number << endl;
    cout << "alamat dari variabel number : " << &number << endl; //alamat memori number
    cout << "isi variabel pointer number : " << pointer_number << endl; //alamat yg lg ditunjuk pointer
    cout << "isi variabel yg di tunjuk oleh pointer_number : " << *pointer_number << endl;
    cout << "alamat memori dari variabel pointer_number : " << &pointer_number << endl;

}