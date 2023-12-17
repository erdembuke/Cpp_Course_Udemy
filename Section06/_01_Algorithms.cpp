#include <iostream>
#include <chrono>

using namespace std;

int main() {
    /*
     * ALGORITMA GELISTIRME
     *
     * Kullanicidan bir tam sayi degeri aliniz
     * 1'den kullanicinin girdigi sayiya kadar tum asal sayilari bulunuz
     *
     * Orn. Kullanici 100 girdiyse
     * Asal Sayilar: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
     *               43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 ve 97
     */
    int sayi;
    int kalansizBolum = 0;

    cout << "Tam sayi girisi yapin ->";
    cin >> sayi;

    chrono::steady_clock::time_point begin = chrono::steady_clock::now();
    for (int i = 2; i <= sayi; ++i) {

        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
                kalansizBolum++;
        }
        if (kalansizBolum == 2)
            cout << i << " ";

        kalansizBolum = 0;
    }
    chrono::steady_clock::time_point end = chrono::steady_clock::now();

    cout << "\n1. algoritma suresi -> " << chrono::duration_cast < chrono::microseconds > (end - begin).count()
    << " microseconds" << endl;

    // Problemi cozen bir algoritma gelistirdik. Onemli olan seylerden biri de algoritmanin hizli, verimli calismasi
    // az kaynak tuketmesidir. o yuzden 26. kod satirindan sonra ekleme yapacagiz ki bolunebilen sayisi 2 den fazla
    // oldugu zaman , sayi asal olamayacagi icin bakmaya devam etmesin. Kucuk sayilar kullandigimizda cok onemsiz
    // gozukse de onemlidir. Ozellikle buyuk sayilarla calisinca bize onemli bir performans artisi olacaktir

    int sayi2;
    int kalansizBolum2 = 0;

    cout << "Tam sayi girisi yapin ->";
    cin >> sayi2;

    chrono::steady_clock::time_point begin2 = chrono::steady_clock::now();
    for (int i = 2; i <= sayi2; ++i) {

        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
                kalansizBolum2++;
            if(kalansizBolum2 > 2)
                break;
        }
        if (kalansizBolum2 == 2)
            cout << i << " ";

        kalansizBolum2 = 0;
    }
    chrono::steady_clock::time_point end2 = chrono::steady_clock::now();

    cout << "\n2. algoritma suresi -> " << chrono::duration_cast < chrono::microseconds > (end2 - begin2).count()
    << " microseconds" << endl;



    return 0;
}