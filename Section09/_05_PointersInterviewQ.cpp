#include <iostream>

using namespace std;

int main() {
    // Programlama Sinav - Mulakat Sorusu
    // Asagidaki programin ciktisi nedir?

    int a[5], *p, z;

    for (int i = 0; i < 5; ++i)
        a[i] = i * i;

    p = a;
    z = *(p+1) + *(a+2); // 1 + 4

    cout << z; // 5


    return 0;
}