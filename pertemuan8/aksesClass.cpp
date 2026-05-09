/*class= wadah yg mengelompokkan fungsi*/
#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;
    
    protected:
        int protectedVar;

    public:
        int publicVar;

    //constructor = function otomatis  yg kt jalankan saat objek itu dibuat
    ContohAkses() {
    privateVar = 1;
    protectedVar = 2;
    publicVar = 3;
    }

    void tampilkanSemua(){
        cout << "akses dari dalam class sendiri : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
        
    }

};

//inheritance = pewarisan, class turunan
class Turunan : public ContohAkses{
    public:
    void aksesProtected(){
        //cout << privateVar << endl; //error krn dia cm bs di akses di kls yg sama(ini udh beda)
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};


int main(){
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\nakses dr luar class : " << endl;
    //cout << obj.privateVar << endl; //error krn tdk bs di akses di luar class
    //cout << obj.protectedVar << endl; //error jga sm dgn private tdk bs di luar class
    cout << obj.publicVar << endl;

    cout << "\nakses dr kelas turunan : " << endl;
    Turunan tur;
    tur.aksesProtected();

}