#include <iostream>

using namespace std;

int main() {
    // int array
    int dizi[] = {27, 3, 77, 50, 44}; // dizi olusturmanin baska bir yolu

    for (int i = 0; i < 5; ++i) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    // string array
    string seasons[] = {"Spring", "Summer", "Autumn", "Winter"};

    for (int i = 0; i < 4; ++i) {
        cout << seasons[i] << " , ";
    }
    cout << endl;

    // double array
    double numbers[] = {12.77,26.51,8.61,1.77,3.56};

    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " / ";
    }

    return 0;
}