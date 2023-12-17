#include <iostream>

using namespace std;

int main() {
    // int arr[n]; seklinde tanimlamak hata verir. runtime sirasinda belli olacak cunku.
    // o yuzden dizi yerine pointer tanimliyoruz
    int n;
    cout << "Array'in kac tamsayi icerecegini yazin:";
    cin >> n;

    //int arr[n];
    int *p = new int[n]; // runtime esnasinda degere gore (orn 3 adet) yer rezerve edilir *p = ilk elemanin adresi olur
    for (int i = 0; i < n; ++i) {
        cout << i+1 << ". sayi:";
        cin >> p[i];    // tipki array'e erisir gibi yaziyoruz
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += p[i];    // sum = sum + p[i];
    }

    cout << "sayilarin toplami = " << sum;

    delete[] p; // array oldugu icin delete[]


    return 0;
}