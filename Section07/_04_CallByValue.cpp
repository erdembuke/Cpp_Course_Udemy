#include <iostream>

using namespace std;

void change(int value)
{
    value = value * 2;
}

int main()
{
    int number = 5;
    change(number);
    cout << "Number: " << number << endl; //

    return 0;
}