#include <iostream>

using namespace std;

int main() {
    /*
     * 4 basamakli ve rakamlari birbirinden farkli
     * kac tane tam sayi oldugunu bulan ve ekrana yazdiran bir C++ programi yaziniz.
     */

    // 1000 - 9999
    int count = 0;
    int birlerBas, onlarBas, yuzlerBas, binlerBas;

    for (int i = 1000; i <= 9999; ++i) {
        // 1234
        birlerBas = i % 10;
        onlarBas = (i / 10) % 10;
        yuzlerBas = (i / 100) % 10;
        binlerBas = (i / 1000);

        if (birlerBas != onlarBas & birlerBas != yuzlerBas && birlerBas != binlerBas // birler basamagi karsilastirma
        && onlarBas != yuzlerBas && onlarBas != binlerBas // onlar basamagi karsilastirma
        && yuzlerBas != binlerBas) { // yuzler basamagi karsilastirma
            count++;
        }
    }

    cout << "1000 - 9999 arasinda \"" << count << "\" adet rakamlari farkli tamsayi vardir" << endl;
    return 0;
}