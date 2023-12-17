#include <iostream>

using namespace std;

/*
 KARSILASTIRMA OPERATORLERI
 ==     -> eşit mi              4 == 5 -> False / 7 = 7 -> True
 !=     -> esit degil           4 != 5 -> True / 7 != 7 -> False
 >      -> buyuk                4 > 5 -> False / 7 > 5 -> True / 7 > 7 -> False
 <      -> kucuk                3 < 7 -> True
 >=     -> buyuk veya esit      4 >= 5 -> False / 5 >= 5 -> True
 <=     -> kucuk veya esit      3 <= 3 -> True / 3 <=5 -> True / 3 <= 1 -> False

 MANTIKSAL OPERATORLER
 &&     -> AND, ikisi de true          (1 < 3) && (4 < 7) -> True / (10<3) && (4<7) -> False
 ||     -> OR, herhangi biri true      (3 < 1) || (4 > 5) -> False / (3 > 1) || (4 > 5) -> True
 !      -> NOT, sonucu zitta cevirir   !(3 > 1) -> False / !(10 > 20) -> True
 */

int main() {
    // != operatoru
    int x = 4506; // sifre
    int y = 4506; // user input

    if (x != y) {
        cout << "Yanlis sifre\n";
    } else {
        cout << "Dogru sifre\n";
    }

    // && || operatorleri
    int sayi1,sayi2;
    cout << "1. sayiyi girin:";
    cin >> sayi1;
    cout << "2. sayiyi girin:";
    cin >> sayi2;

    if (sayi1 > 0 && sayi2 > 0){
        cout << "girilen sayilarin ikisi de pozitif";
    } else if (sayi1 < 0 && sayi2 < 0){
        cout << "girilen sayilarin ikisi de negatif";
    } else if (sayi1 > 0 && sayi2 < 0){
        cout << "girilen sayilarin birincisi pozitif, ikincisi negatif";
    } else if (sayi1 < 0 && sayi2 > 0){
        cout << "girilen sayilardan birincisi negatif, ikincisi pozitif";
    } else if (sayi1 == 0 && sayi2 > 0){
        cout << "girilen sayilardan birincisi 0, ikincisi pozitif";
    } else if (sayi1 == 0 && sayi2 < 0){
        cout << "girilen sayilardan birincisi 0, ikincisi negatif";
    } else if (sayi1 > 0 && sayi2 == 0){
        cout << "girilen sayilardan birincisi pozitif, ikincisi 0";
    } else if (sayi1 < 0 && sayi2 == 0){
        cout << "girilen sayilardan birincisi negatif, ikincisi 0";
    } else cout << "girilen sayilarin ikisi de 0";
    // detayli output istenildigi icin bu kadar fazla if blogu var, kisaltilabilir.

    // ! (NOT) operator
    int j = 10;
    cout << "\nj degeri = " << j;
    if (j != 5){
        cout << "\nj degeri 5 e esit degil";
    }

    // Soru: kullanicidan 3 tam sayi girisi alan ve bu girdiler arasindaki en kucugunu bulan program
    int input1,input2,input3;
    cout << "\n1. sayiyi giriniz:";
    cin >> input1;
    cout << "2. sayiyi giriniz:";
    cin >> input2;
    cout << "3. sayiyi giriniz:";
    cin >> input3;

    if (input1 <= input2 && input3) {
        cout << "Girdiginiz sayilardan en kucugu " << input1;
    } else if (input2 <= input1 && input3) {
        cout << "Girdiginiz sayilardan en kucugu " << input2;
    } else {
        cout << "Girdiginiz sayilardan en kucugu " << input3;
    }

    // C++ sinav/mulakat sorusu
    int n = 5;
    int m = 10;

    if (n = 20){
        if (y == 10)
            cout << "**";
    }else cout << "*****";
    // cikti "**" olacaktir

    return 0;
}



