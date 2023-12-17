#include <iostream>

using namespace std;

// teknik olarak dogru ama hicbir sey yapmayan fonksiyon kullanilmaz
void doNothing(){

}

void printHello() {
    cout << "Merhaba C++" << endl;
    cout << "Merhaba C++" << endl;
    cout << "Merhaba C++" << endl;
}

// String parametresi ve cout ile yazdirmak
void printHello2(string name) { // string name = parametre
    cout << "Hello " << name << endl;
    cout << "Hello " << name << endl;
    cout << "Hello " << name << endl;
}

string nameSurnameTogether() { // put name and surname together
    string name,surname,both;
    cout << "Please input your name:";
    cin >> name;
    cout << "Please input your surname:";
    cin >> surname;

    both = name + " " +surname;
    return both;
}

// Function Overloading
// fonksiyonun ayni isimde,farkli parametrelerde birden fazla kullanilmasidir
// programin okunabilirligini artirir, kullanmamizin sebebi daha kullanisli bir kod olur kolay okunur ve
// kodun maintenance edilmesi daha kolay olur
// 2 yolu var , farkli sayida arguman turleri ya da farkli arguman turleri

void printErrorMessage() {
    cout << "Warning! there is an error in the application" << endl;
}
/*
int printErrorMessage() {
                            function overloading olmaz!!! yalnizca donus turu farkli olursa overloading yapilamaz
    return 0;
}
 */
void printErrorMessage(string message) {
    cout << message << endl;
}
void printErrorMessage(int error) {
    cout << "Warning! there is code " << error << " error in the application" << endl;
}
// yukaridaki gibi fonksiyon isimleri ayni ama parametre türleri farkli
void printErrorMessage(int error1, int error2) {
    cout << "Warning! there is code " << error1 << " and" << " code " << error2 << "error in the application" << endl;
}




int main () {
    printHello();
    printHello2("Halit");

    cout << nameSurnameTogether() << endl;
    // methodlar bizi main icindeki kod kalabaligindan kurtarir ve daha duzenli bir kod elde edilir.

    printErrorMessage();
    printErrorMessage("Error in app!!!"); // function overloading 1
    printErrorMessage(17);                  // function overloading 2
    printErrorMessage(0367,7715);    // function overloading 3


    return 0;
}