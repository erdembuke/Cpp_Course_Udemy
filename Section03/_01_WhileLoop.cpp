#include <iostream>

using namespace std;

int main() {

    /*
     While dongusu :
     - Onceden belirlenmis bir kosul bozulana kadar devam eder
     - Kosulun her kontrolunden sonra dongu icerisindeki islemler bir kez yapilir.
     - Kosul bozulduktan sonraki ilk kontrolde dongu terk edilir

     while (kosul)
     {
         yapilacak islem 1
         yapilacak islem 2
         ...
     }

     */

    int index = 2;

    while (index <= 3) {
        cout << "index " << index << endl;
        cout << "index degeri 3'den kucuk" << endl;
        index++; // dongu icinde index in degerini artirmazsam sonsuza kadar donecek.
    }
    cout << "\nProgram sonu\n";

    /* Soru
     Kullanicidan 2 sayi alin. Baslangic ve bitis sayilari olarak adlandiriniz.
     baslangic sayisindan bitis sayisina kadar olan sayilar arasindaki tum sayilardan
     7 ile bolunebilenleri ekrana yazdirin
     orn baslangic = 12 / bitis = 23 ise 14 ile 21 yazdirsin
     */
    int baslangic, bitis, index2;
    cout << "Baslangic sayisi:";
    cin >> baslangic;
    cout << "Bitis sayisi:";
    cin >> bitis;

    cout << "7 ye tam bolunenler -> ";
    // baslangic = 12 , bitis = 23  ilk index 12
    index2 = baslangic;
    while (index <= bitis) {
        if (index % 7 == 0) {
            cout << index << " ";
        }
        index++;
    }

    // ayni sorunun 5 e bolunenleri yazdirilmis hali
    int baslangic2, bitis2, index3;
    cout << "\nBaslangic sayisi:";
    cin >> baslangic2;
    cout << "Bitis sayisi:";
    cin >> bitis2;

    cout << "5 e tam bolunenler -> ";
    // baslangic = 12 , bitis = 23  ilk index 12
    index2 = baslangic2;
    while (index2 <= bitis) {
        if (index2 % 5 == 0) {
            cout << index2 << " ";
        }
        index2++;
    }


    return 0;
}