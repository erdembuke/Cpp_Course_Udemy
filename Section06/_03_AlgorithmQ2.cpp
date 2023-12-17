#include <iostream>

using namespace std;

int main() {
    /*
     * 20 ile 40 arasindaki sayilarin tum bolenlerini bulan ve ekrana yazdiran programi yaziniz
     * Orn. 20 bolenleri: 1, 2, 4, 5, 10, 20
     */

    for (int i = 20; i <= 40; ++i) {
        cout << i << " Bolenleri: ";
        for (int j = 1; j <= i; ++j) {
            if(i % j == 0) // kalansiz bolunuyorsa
                cout << j << ", "; // yazdir
        }
        cout << endl; // alt alta yazmasi icin
    }


    return 0;
}