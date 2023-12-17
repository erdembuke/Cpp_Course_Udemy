#include <iostream>

using namespace std;

int main() {
    int arr[] = {8, 12, 20}; // bellekte "arr" nin degeri, [0] indexli elemanın "adresi" olur
    // dizinin icindeki elemanlar bellekte bitisik, art arda sıralı tutulur, 1004 - 1008 - 1012 - 1016 - 1020 ...
    // arr[0] = 8 elemaninin adresinin 1004 oldugunu varsayarsak, arr nin bellekteki degeri de 1004 olarak tutulur
    cout << arr << endl; // dizinin bellekteki adresini yazacak

    int *p;
    p = arr;

    cout << "bellekte arr dizi adresi: " << arr << endl; // dizinin adresi yazicak
    cout << "bellekte arr dizi adresi: " << p << endl; // dizinin adresi yazicak

    int *f;
    f = &arr[0]; // dizinin 0 index li elemaninin adresi
    cout << "0 index adresi: " << f << endl; // dizinin adresi yazicak

    cout << "0 indexli eleman: " << *f << endl; // 8 yazacak
    *f = 216; // 0 indexli elemani degistirdik
    cout << "0 indexli eleman: " << *f << endl; // 216 yazacak

    // 12 yi (1 indexli, dizinin 2. elemani) yazdirmak istersem arr nin adresine +1 eklemem gerekir
    cout << "1 indexli eleman: " << *(p + 1) << endl; // 12 yazar, 1 index sonrasini istedigimiz icin +1
    cout << "2 indexli eleman: " << *(p + 2) << endl; // 20 yazar

    // 2 indexli son elemanin degerini degistirmek. 20 yerine 22 yapacagiz
    *(p + 2) = 22; // 0 dan 2 index ileri gittigimiz icin +2

    cout << "2 indexli eleman: " << *(p + 2) << endl; // bu sefer 20 yerine 22 yazacak
    cout << "arr[2]: " << arr[2] << endl;

    *(p + 2) *= 2; // son degerinin 2 kati yaptik. (22 * 2 = 44) Artik 2 indexli eleman 44 oldu
    cout << "2 indexli eleman: " << *(p + 2) /* arr [2] de olur */ << endl;

    cout << endl;
    // int deger tuttugu icin adresler arasinda 4 fark olur, bunu gormek icin adreslerini alt alta yazdiracagim
    cout << "Address ler ileri seviye ek bilgi:\n";
    cout << "0 index address: " << p << endl;
    cout << "1 index address: " << (p + 1) << endl; // onceki address in 4 fazlasi (int oldugu icin)
    cout << "1 index address: " << (p + 2) << endl; // onceki address in 4 fazlasi (int oldugu icin)


    return 0;
}