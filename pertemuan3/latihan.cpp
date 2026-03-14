#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    system ("CLS");
    cout << "masukkan berat badan anda (kg): " << endl;
    cin >> berat;

    cout << "masukkan tinggi anda (m): " << endl;
    cin >> tinggi;
    bmi = berat / (tinggi * tinggi);
    cout << "BMI anda: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "berat badan kurang" << endl;}
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "normal" << endl;}
    else if (bmi >= 25 && bmi < 30) {
        cout << "berat badan berlebih" << endl;}
    else {
        cout << "obesitas" << endl;}

    return 0;
}