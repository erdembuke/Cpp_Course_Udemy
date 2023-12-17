#include <iostream>

using namespace std;

int main() {
    // asagidaki programin ciktisi ne olur?

    int x = 7;
    int *p = &x;
    int y = *p + 8; // p nin icerigi (7) + 8 den y = 15
    int *z = &y;
    int w = *z + 5; // z nin icerigi (15) + 5 den w = 20

    cout << w; // 20 ciktisini elde ederiz

    return 0;
}