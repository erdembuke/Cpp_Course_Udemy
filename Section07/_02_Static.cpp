#include <iostream>

using namespace std;

/*

 * STATIC DEGISKENLER:
 * Bir degisken statik olarak bildirildiginde, programin omru boyunca (lifetime) ona yer ayirilir.
 * Fonksiyon birden fazla kez cagirilsa bile, statik degisken icin yer yalnizca bir kez ayirilir
 * ve onceki cagridaki degiskenin degeri bir sonraki islev cagrisina tasinir.

 */

void method()
{
    int count = 0;
    count++;
    cout << "method count: " << count << endl;
}

void methodStatic()
{
    static int count = 0;
    count++;
    cout << "methodStatic count: " << count << endl;
}

void methodStatic2()
{
    static int count = 0;
    count++;
    cout << "methodStatic count: " << count << endl;
}

int main()
{
    method(); // method count: 1 ciktisi verecek
    method(); // method count: 1 ciktisi verecek. STATIC olmadigi icin count 2 olmaz, sifirlanip yine 1 olur

    methodStatic(); // methodStatic count: 1
    methodStatic(); // methodStatic count: 2 STATIC oldugu icin count 1 den 2 ye cikacaktir
    methodStatic(); // methodStatic count: 3
    methodStatic(); // methodStatic count: 4

    methodStatic2(); // methodStatic count: 1 // sayaclar birbirine karismaz, her sayacin scope i farklidir

    methodStatic(); // methodStatic count: 5

    return 0;
}