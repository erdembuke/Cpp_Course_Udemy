#include <iostream>

using namespace std;

// int dizisinin her bir elemanini istenilen miktarda arttirir
void increaseArray(int array[], int length, int increaseNumber) {
    for (int i = 0; i < length; ++i) {
        array[i] += increaseNumber;
    }
}

void increaseOne(int number) { // parametre local degiskendir, sayiyi bir artirmaz gonderdigimiz sayi ayni kalir
    number += 1;    // pass by value
}

int main() {
    int arr[] = {3,9,12,5,10,1,3};

    increaseArray(arr,7,1);
    for (int i = 0; i < 7; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sayi = 10;
    increaseOne(sayi); // 10 yazacak, 1 artirip 11 yazmaz. orjinalin icerigi degismez dizi degilse
    cout << sayi;

    return 0;
}