#include <iostream>

using namespace std;

int* fonksiyon() {
    int *p = new int;
    *p = 37;
    // p = NULL; -> sensor dogru olcemezse null gonderebilir
    return p;
}

int main() {
    int *ptr;
    ptr = fonksiyon();

    if (ptr != NULL) {  // null degilse yazdir kodunu yazdik, yazmazsak sensor degeri null oldugunda crash olur
        cout << *ptr << endl;
        delete ptr;
    }




    return 0;
}