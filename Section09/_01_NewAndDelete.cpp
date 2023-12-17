#include <iostream>

using namespace std;

void function(int *p){
    if(p != NULL)
        cout << *p << endl;
}

int main() {
    // dinamik bellek yonetimi

    // pointer kullanmak icin degisken kullanmama gerek yok
    int *p = new int; // bellekte 4 byte (int) bir yer rezerve ediliyor
    cout << *p << endl; // bellegin adresini yazacak

    *p = 5; // p nin icerigine eris ve degerini 5 e esitle
    cout << *p << endl; // degeri 5 olarak degistirdik 5 yazacak

    // bunu neden yapariz ?
    // sensor vs. vasitasiyla hizli bir sekilde, dinamik olarak okuma yazmasi yapmasi gerekebilir.
    // bu yuzden dinamik bellek yonetimi parcasi olan new komutu kullanilir

    delete p;
    // isimiz bittigi zaman delete p yaparak veriyi bellekten sileriz. rezerve olarak ayrilan yerdeki veri silinir.
    // orn 1000 e rezerve olduysa 1000 e gider ve siler. böylece bellekteki alan tekrar kullanima acilir
    // delete yapmadigimiz zaman, veriyle isimiz bitse de silmez ve o alan program bitene kadar kullanilamaz hale gelir
    // boylece bellekte yer isgal etmis olur, bu verilerin sayisi arttikca yasanacak problemler de artacaktir
    p = NULL; // delete ettikten sonra yazdirmak icin p=null yazarak yazdirabiliriz, kullanmadigmizi göstermek icin
    function(p);

    // tekrar kullanmak istersek yeniden deger atariz
    p = new int;
    *p = 10;

    cout << *p << endl;
    delete p;


    return 0;
}