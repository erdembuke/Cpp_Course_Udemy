#include <iostream>
#include <cmath> // eger visual studio kullanirsak, iostream icinde cmath var zaten. Ama CLion da yok. yazmaliyiz.

using namespace std;

int main() {
    // us alma fonksiyonu (POW)
    int sonuc, x, y;
    cout << "Ussu alinacak sayi =";
    cin >> x;
    cout << "Ussu girin =";
    cin >> y;
    sonuc = pow(x, y);
    cout << "result is " << sonuc << endl;

    // floor, alt tarafa yuvarlar
    int sonuc2;
    sonuc2 = floor(2.7); // 2 ye yuvarlayacak
    cout << "2.7 floor un sonuc " << sonuc2 << endl;

    // ceil, üst tarafa yuvarlar
    int sonuc3;
    sonuc3 = ceil(2.1); // 3 e yuvarlayacak
    cout << "2.1 in ceil sonuc " << sonuc3 << endl;

    // round, en yakına yuvarlar
    int sonuc4;
    sonuc4 = round(2.4); // 2 ye yuvarlar
    cout << "2.5 un round " << sonuc4 << endl;


    return 0;
}