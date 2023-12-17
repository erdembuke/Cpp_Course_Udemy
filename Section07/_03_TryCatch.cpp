#include <iostream>

using namespace std;

int main()
{
    int bolunen, bolen;

    cout << "Lutfen bolunen sayiyi girin:";
    cin >> bolunen;

    cout << "Lutfen bolen sayiyi girin:";
    cin >> bolen;

    int sonuc;
    try {
        if (bolen == 0)
            throw 99; // baska sayi kullanilabilir
        sonuc = bolunen / bolen;
        cout << "Sonuc: " << sonuc << endl;
    } catch (int hataKodu) {
        cout << "Bolen sayi 0 olmamali !" << endl;
    }

    return 0;
}