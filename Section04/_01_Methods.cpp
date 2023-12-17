#include <iostream>

using namespace std;

int calculate(int x) {
    int result;
    result = (3 * x) + 2;

    return result;
}

int alanHesap(int x, int y) {
    int alan = x * y;

    return alan;
}

void kareAlanHesaplaGoster(int kenar) {
    int alan = kenar * kenar;

    cout << "Kenari " << kenar << " cm olan karenin alani: " << alan << "m2";
}

int main() {
    // C++ fonksiyonlar - C++ metodlar
    // f(x) = 3x + 2
    // f(3) = 11

    int result;
    result = calculate(2);

    cout << result << " / Farewell..";          // output : 8 / Farewell..
    cout << calculate(2) << " / Farewell.."; // output : 8 / Farewell..

    // alan hesaplama method u kullanim
    cout << "\nkisa kenar 5, uzun kenar 10 olan dikdortgenin alani = "<<alanHesap(5,10) << endl;

    // kare alani kesaplama method u
    kareAlanHesaplaGoster(5);

    return 0;
}