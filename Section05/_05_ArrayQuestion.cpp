#include <iostream>

using namespace std;

    /*
     Kodlama Sorusu:
     Kullanicidan 4 tane tamsayi alin, bu tamsayilari kullanicinin girdigi siranin tam tersi olarak ekrana yazdirin
     Mesela kullanici 7 1 2 9 girdiyse bunu 9 2 1 7 olarak yazdirin
     */

int main() {
    // 1. yontem
    int dizi[4];
    cout << "4 adet sayi girmeniz beklenmektedir\n";
    
        for (int i = 0; i < 4; ++i) {
            cout << i+1 << ". sayiyi girin:";
            cin >> dizi[i];
        }

    cout << "Sayilarinizin ters yazilmis hali:\n"  ;

        for (int i = 3; i >= 0; --i) { // son index (3) den baslayip ilk index (0) a geri geldik
            cout << dizi[i] << " ";
        }

    // 2. yontem (Sayilari aralarinda bir bosluk birakarak girdik, sonra enter yaptik)
    int dizi2[4];
    cout << "\n4 adet sayi girmeniz beklenmektedir\n";

        for (int i = 0; i < 4; ++i) {
            cin >> dizi[i];
        }

    cout << "Sayilarinizin ters yazilmis hali:\n";

        for (int i = 3; i >= 0; --i) {
            cout << dizi[i] << " ";
        }




    return 0;
}