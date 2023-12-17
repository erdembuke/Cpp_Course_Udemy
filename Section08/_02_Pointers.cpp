#include <iostream>

using namespace std;

/*                                                                                          *
 *                                                                                          *
 * Pointer'lar icinde adres tutan, C ve C++ dillerine ozgu ozel bir degisken tipidir        *
 *                                                                                          *
 *                                                                                         */

int ucakYonBilgileriHesapla(int x_) { // maliyetli yontem
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    x_ = 34;
    return x_;
}

void ucakYonBilgileriniHesapla(int *p) { // hizli verimli yontem
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    // cok sayida matematiksel hesaplama satirlari ..
    *p = 34;
}

int main() {
    int x = 10;

    int *ptr;
    ptr = &x;

    cout << ptr << endl; // x degiskeninin adresini yazdirmak
    cout << &x << endl; // baska bir yontemi

    x = ucakYonBilgileriHesapla(x);
    // yeni yon bilgisine gore islemler devam edecek
    cout << "yeni yon: " << x << endl;

    // pointer ile yapimi
    int y = 30;
    int *p;
    p = &y;
    ucakYonBilgileriniHesapla(p);
    cout << "yeni yon ptr: " << y << endl;

    return 0;
}