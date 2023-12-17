#include <iostream>

using namespace std;

int main() {

    /*
      C++ Sinav Sorusu
      Soru: Kullanicinin console'dan girdigi sayiya gore ekrana asagidaki ciktiyi veren
      programi yaziniz:

      Lutfen bir sayi giriniz: 4
      1
      2 2
      3 3 3
      4 4 4 4
    */

    int sayi;
    cout << "Sayi gir:";
    cin >> sayi;

    for (int i = 1; i <= sayi; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}