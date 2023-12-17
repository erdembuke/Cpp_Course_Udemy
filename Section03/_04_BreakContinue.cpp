#include <iostream>

using namespace std;

int main() {
    /*
     C++ break, continue, breakpoint (DEBUG) kullanimi
     break: donguyu sonlandirir (dongu kirilir)
     continue: continue keyword'unun altindaki kod kisimlari atlanip dongu devam ettirir
     */

    // dongu i 3 olunca kirip cikacak. Output : 0,1,2
    cout << "break -> ";
    for (int i = 0; i <= 5 ; ++i) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;

    // dongude i = 3 oldugunda 3 u yazmadan devam edicek 4,5 seklinde. Output: 0,1,2,4,5
    cout << "continue -> ";
    for (int i = 0; i <= 5 ; ++i) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    // breakpoint (debug) kullanimi
    int x = 5;

    for (int i = 0; i <= 10; i++) {
        cout << i << "  ";
    }

    return 0;
}