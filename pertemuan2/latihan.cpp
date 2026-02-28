#include <iostream> 
using namespace std;

int main()
{
    const float phi = 3.14;
    float r, luas, volume;

    cout << "masukkan jari jari :  ";
    cin >> r;

    volume = (float)4/ (float)3 * phi *r*r*r;
    luas = 4 *phi*r*r;

    cout << "volume = " << volume << endl;
    cout << "luas = " << luas << endl;
}