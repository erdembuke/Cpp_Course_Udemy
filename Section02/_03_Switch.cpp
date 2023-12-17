#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); // Turkce karakter kullanmak icin en basa yazmaliyiz
    // avg. 4-5 durum ya da daha fazla varsa birsuru if else yerine switch kullanilarak kod okunmasi kolaylasir
    // ve kodlama da daha kolay olur, karmasiklik onlenir
    int day;
    cout << "Haftanin kacinci gununun yazdirilmasini istersiniz? (3=Carsamba gibi) ->";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Pazartesi";
            break;
        case 2:
            cout << "Sali";
            break;
        case 3:
            cout << "Carsamba";
            break;
        case 4:
            cout << "Persembe";
            break;
        case 5:
            cout << "Cuma";
            break;
        case 6:
            cout << "Cumartesi";
            break;
        case 7:
            cout << "Pazar";
            break;

        default:
            cout << "Hatali input, tekrar deneyin..";

    }

    // ornek C++ sinav / mulakat sorusu

    // a) asagidaki kod blogu calistirinca w degeri ne olur
    int x = 5, y = 9, z = 7.4, w;
    w = (z > x) - (y <= 11);
    cout << "\n" << w;

    // (z > x) true oldugu icin 1 degeri alir
    // (y <= 11) true oldugu icin 1 degeri alir
    // yani 1-1 = 0 olur. W degeri 0 olur

    // b) asakidaki kod blogu calisinca w degeri ne olur (x,y,z degeri yukardakilerle ayni) --- ???????
    w = z > x - y <= 11;
    cout << "\n" << w << endl;

    // onceliklendirme sirasina göre ilk carpma bolme sonrasinda buyuktur kucuktur vs soldan saga, sonra esittir.
    //                               w = z > -4 <= 11;
    //                               w = 1 <= 11;
    //                               w = 1;

    return 0;
}