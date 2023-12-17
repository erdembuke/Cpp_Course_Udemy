#include <iostream>

using namespace std;

int main(){
    string name;
    int en, boy, alan;
    cout << "your name =";
    cin >> name;
    cout << "Hello " << name << " Welcome to C++ programming course." << endl;

    cout << "Lutfen dikdortgenin enini giriniz:";
    cin >> en;
    cout << "Lutfen dikdortgenin boyunu giriniz:";
    cin >> boy;

    // hesaplama islemi
    alan = (en * boy);

    cout << name + " Bey, girdiginiz verilere gore alan " << alan << "m2 dir";

    return 0;
}