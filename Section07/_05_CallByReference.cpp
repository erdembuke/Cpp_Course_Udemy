#include <iostream>

using namespace std;

void change(int &value) // & koydugumuzda gonderilen degiskeni kullanir, call by reference.
{
    value *= 2;
    cout << "value is " << value << endl;
}

int main() {
    int sayi = 5;
    change(sayi);
    cout << "value is : " << sayi << endl;

    return 0;
}