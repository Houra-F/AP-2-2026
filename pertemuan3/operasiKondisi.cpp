#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system ("CLS");
    cout << "masukkan nilai : ";
    cin >> nilai;

    //if statement
    // if (nilai <= 65){
    // cout << "Anda tidak lulus" << endl;}

    //if else statement
    //    if (nilai <= 65){
    //    cout << "Anda tidak lulus" << endl;}
    //    else {
    //    cout << "Anda lulus" << endl;}

    //if else if statement
    // if (nilai == 100){
    //     cout << "Anda keceh" << endl;}
    // else if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;}
    // else {
    //     cout << "Anda lulus" << endl;}

    //nested if statement
    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;}
    // else {
    //     if (nilai == 100){
    //         cout << "Anda lulus & Anda hebat" << endl;}
    //     else{
    //         cout << "Anda lulus" << endl;}
    // }

    //switch case statement
    // switch(nilai){
    //     case 1:
    //       cout << "senin" << endl; break;
    //     case 2:
    //       cout << "selasa" << endl; break;
    //     case 3:
    //       cout << "rabu" << endl; break;
    //     case 4:
    //       cout << "kamis" << endl; break;
    //     case 5:
    //       cout << "jumat" << endl; break;
    //     case 6:
    //       cout << "sabtu" << endl; break;
    //     case 7:
    //       cout << "minggu" << endl; break;
    //     default:
    //       cout << "inputan salah" << endl; break;
    // }

    //switch range case statement
    // switch (nilai){
    //     case 85 ... 100:cout << "nilai A" << endl; break;
    //     case 80 ... 84:cout << "nilai B+" << endl; break;
    //     case 75 ... 79:cout << "nilai B" << endl; break;
    //     case 70 ... 74:cout << "nilai C+" << endl; break;
    //     case 65 ... 69:cout << "nilai C" << endl; break;
    //     case 60 ... 64:cout << "nilai D" << endl; break;
    //     default: cout << "inputan salah" << endl; break;
    // }

    //ternary operator
    // if (nilai % 2 == 0){
    //     cout << "nilai genap" << endl;}
    // else{
    //     cout << "nilai ganjil" << endl;
    // }

    (nilai % 2 == 0) ? cout << "nilai genap" << endl: cout << "nilai ganjil" << endl;






    return 0;
}
