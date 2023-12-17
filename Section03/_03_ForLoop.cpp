#include <iostream>

using namespace std;

int main() {
    /*

     For dongusu, temel olarak bir kod blogunu belirli bir sayida ve ust uste
     calistirmak icin kullanilan bir dongudur

     */

    // 1 den 10 a kadar tum sayilari ekrana yazdiran bir for loop
    // for (sayac tanimi ve ilk deger atama;kosul;sayac artis degeri)

    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

    // 1 den 25 e kadar olan cift sayilar
    cout << "\n1 den 25 e kadar olan cift sayilar -> ";
    for (int i = 1; i <= 25; ++i) {
        if (i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << endl;

    // C++ Programlama Sinav Sorusu
    //
    // kullanicinin console uzerinden girdigi sayinin faktoriyelini hesaplayan C++ Programi yazin
    // 3! = 3*2*1 = 6
    // 4! = 4*3*2*1 = 24
    int sayi, sonuc = 1;

    cout << "Sayi gir:";
    cin >> sayi;

    for (int i = 1; i <= sayi; ++i) {
        sonuc = sonuc * i;
    }
    cout << sayi << " sayisinin faktoriyeli = " << sonuc << endl;

    // sayidan baslatip eksilterek gitmek, ayni sonuc. sayidan baslatip 0 a kadar gitmek i-- ile
    int sayi2, sonuc2 = 1;
    cout << "2.Sayi gir:";
    cin >> sayi2;

    for (int i = sayi2; i > 0 ; i--) {
        sonuc2 *= i;
    }
    cout << sayi2 << " sayisinin faktoriyeli = " << sonuc2 << endl;


    return 0;
}