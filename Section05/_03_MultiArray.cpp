#include <iostream>

using namespace std;

int main() {
    // C++ Cok Boyutlu Diziler - Multi Dimensional Arrays
    int arr[2][3] = { {8,17,25} ,
                      {12,40,35}
                    };

    cout << arr[0][0] << " "; // 8
    cout << arr[1][2] << " "; // 35
    cout << arr[1][1] << " "; // 40
    cout << endl;

    cout << "Please input the [1][2] value of the array:";
    cin >> arr[1][2];

    cout << arr[0][0] << " "; // 8
    cout << arr[1][2] << " "; // input ile degisecek
    cout << arr[1][1] << " "; // 40
    cout << endl;
    cout << endl;

    // cok boyutlu diziyi yazdirmak
    for (int i = 0; i < 2; ++i) {

        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}