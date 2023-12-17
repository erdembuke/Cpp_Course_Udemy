#include <iostream>

using namespace std;

int main() {
    int x = 7; // bellekte -> Adres: 1004 / deger: 7 / ad: x / seklinde yer tutar
    int y = 8; // bellekte -> Adres: 1008 / deger: 8 / ad: y / seklinde yer tutar

    /*
     * bir degiskenin basinda yildiz gorurseniz pointer dir
     * pointer icinde bir degiskenin adresini tutan bir yapidir.
     */

    int *ptx = &x; // x in adresini tutar --- & = Address of : 'nin adresi / &x = x degiskeninin adresi
    int *pty = &y; // y nin adresini tutar -- & = Address of : 'nin adresi / &x = x degiskeninin adresi

    // x i kullanmadan x degeri yazdirmak
    cout << *ptx << endl; // pointer kullanarak x degeri yazdirmak, pointer adresine git, adresin icerigine eris

    // y i kullanmadan y degeri yazdirmak
    cout << *pty << endl; // pointer kullanarak y degeri yazdirmak, pointer adresine git, adresin icerigine eris

    // x i kullanmadan pointer ile x degerini degistirmek
    *ptx = 9;
    cout << *ptx << endl;

    // y i kullanmadan pointer ile y degerini degistirmek
    *pty = 10;
    cout << *pty << endl;
    cout << "y: " << y << endl; // pointer ile y yi kullanmadan y nin degerini degistirdik.



    return 0;
}