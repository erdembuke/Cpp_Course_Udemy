#include <iostream>

using namespace std;

int main() {
    /*

     do {
        yapilacak islem1
        yapilacak islem2
        ...

     } while (kosul);

     kosul yanlissa bile 1 kez calisir, kontrol sonda yapiliyor cunku. while dongusu ile arasindaki fark budur

     */
    int sifre = 1234;
    int input;
    do {
        cout << "Sifre gir:";
        cin >> input;
        if (input != sifre){
            cout << "Sifre yanlis. tekrar deneyiniz...\n";
        }
    } while (input != sifre);
    cout << "Sifre dogru, yonlendiriliyor...";

    return 0;
}