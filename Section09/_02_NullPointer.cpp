#include <iostream>

using namespace std;

int main() {
    // int *p = new int(5);     parantez icinde degeri de verilebilir
    // cout << *p;

    int *p;
    p = NULL;   // NULL POINTER - null u gösteren pointer.
    // direkt deger atanmiyorsa, olusturulup, sonra baska yerlerde kullanilcaksa ilk null a cekilmeli
    // null oldugu bilinsin, yanlislikla fonksiyonlarda vs. kullanilabilir kullanilirsa hata olusur

    if (p != NULL) {
        *p = 5;
    } else {
        p = new int(5); // eger bos degilse bellekte yer ayarla ve bellekte o adrese gidip degerini 5 yap
    }

    cout << *p << endl; // 5 yazdiracak

    // null pointer kullanarak hata yapma ihtimalimizi minimize ediyoruz

    return 0;
}