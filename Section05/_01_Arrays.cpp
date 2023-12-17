#include <iostream>

using namespace std;

int main() {
    // C++ Diziler - Arrays
    int array[5]; // adi "array" olan bir dizi tanimladim
    array[0] = 12; // ilk eleman her zaman 0 index
    array[1] = 20;
    array[2] = 8;
    array[3] = 45;
    array[4] = 18; // son eleman
    // array[5] = 20; -> 5 index i mevcut degildir. hatali kullanim

    cout << array[0] << endl; // dizinin ilk elemanini yazdirmak

    // cout << array[5] << endl; ->> baska bir memory de tutulan random bir sayi gelecek (baska bir dilde hata verirdi)
    // C++ memory ozgurlugu farklidir.
    cout << "please input index 1 number:";
    cin >> array[1]; // 1. eleman degisecek

    for (int i = 0; i < 5; ++i) {
        cout << array[i] << endl;
    }

    return 0;
}