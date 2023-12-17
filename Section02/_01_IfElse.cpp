#include <iostream>

using namespace std;

int main() {
    /*
     if (kosul)
     {
        yapilacak islemler 1
     }
     else
     {
        yapilacak islemler 2
     }

     */
    int temperature = 34;

    if (temperature >= 35) // sicaklik 35 e esit veya daha yuksekse
    {
        cout << "Ortam sicak! Fan calistiriliyor...\n";
    } else // kosul yanlis ise
    {
        cout << "Ortam sicak degil! Fan durduruluyor veya kapali...\n";
    }

    // kullanicidan veri alinmasi sonrasi if blogu

    int temperature2;
    cout << "Sensorden gelen sicaklik =";
    cin >> temperature2;

    if (temperature2 >= 35) {
        cout << "Ortam sicak! Fan Aciliyor...";
    } else {
        cout << "Ortam sicak degil! Fan durduruluyor veya kapali...";
    }

    // kullanicidan deger alarak karar
    int pw = 1234;
    int userInput;
    cout << "\nPlease input password:";
    cin >> userInput;

    if (userInput == pw) {
        cout << "Sifre dogru. Anasayfaya yonlendiriliyor...";
    } else {
        cout << "Sifre yanlis. Sistemden atildiniz.";
    }

    // ornek pratik
    int number1,number2;
    int islem; // islem degeri toplama icin 1, cikarma icin 2, carpma icin 3, bolme icin 4 olacak

    cout << "\nsayi1 girin:";
    cin >> number1;
    cout << "sayi2 girin:";
    cin >> number2;

    cout << "islemi seciniz: (toplama=1/cikarma=2/carpma=3/bolme=4)";
    cin >> islem;

    if (islem == 1) {
        cout << "sonuc " << (number1 + number2);
    } else if (islem == 2) {
        cout << "sonuc " << (number1 - number2);
    } else if (islem == 3) {
        cout << "sonuc " << (number1 * number2);
    } else if (islem == 4) {
        cout << "sonuc " << (number1 / number2);
    } else {
        cout << "hatali giris yaptiniz";
    }

    return 0;
}