#include <iostream>

using namespace std;

int main() {
    // Soru: Asagidaki kodun ekran ciktisi ne olur

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr; // 10
    int *ptr2 = arr+3; // 40

    cout << "ptr2'nin tuttugu deger: " << *ptr2 << endl; // 40

    ptr1++; // 1 index atlayarak 10 degerinden 20 degerine esitlenir
    ptr2--; // 1 index azalarak 40 degerinden 30 degerine esitlenir

    cout << "ptr1'in tuttugu deger: " << *ptr1 << endl; // 20
    cout << "ptr2'nin tuttugu deger: " << *ptr2 << endl; // 30

    /*
     PROGRAMIN CIKTISI:
     ptr2'nin tuttugu deger: 40
     ptr1'in tuttugu deger: 20
     ptr2'nin tuttugu deger: 30
     */

    return 0;
}