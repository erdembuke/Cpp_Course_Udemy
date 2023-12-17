#include <iostream>

using namespace std;

int main() {
    // using cout for String output
    cout << "Hello C++\n" << endl;

    // String tanimlama
    string name;     // tanimlama
    name = "Halit Can";  // atama

    // string'i cout icerisinde kullanmak
    cout << "Bir zamanlar " + name + " isminde bir genc varmis." << endl << name + " 24 yasindaymis.\n";
    cout << name + " ismini sever ancak 24 yasini sevmezmis. Daha genc olmak istermis" << endl;

    // int tanimlama
    int age = 24; // declaration + initialization -> tanimlama + atama

    // int'i string ile birlikte cout da kullanmak
    cout << "\nBir zamanlar " + name + " isminde bir genc varmis." << endl << name + " " << age << " yasindaymis.\n";
    name = "Can Halit"; // string degerini degistirdik
    age = 31; // int degerini degistirdik
    cout << name + " ismini sever ancak " << age << " yasini sevmezmis. Daha genc olmak istermis" << endl;

    /* degisken olustururken dikkat edilecekler
     1- degisken isimlerinde ilk karakter rakam olamaz, sonda olabilir
     2- degisken isimlerinde turkce karakter kullanilmaz
     3- degisken isimlerinde arada bosluk olmaz
     4- degisken isimlerinde arada nokta vb. ozel karakterler kullanilmaz
     5- degisken isimlerinde camelCase standartlarini kullanmaniz tavsiye edilir.
     */
    int dogumYili = 1999;
    int firstExamNote = 80;

    /* variable types
     - int: 4 bytes of memory. Range from -2147483648 to 2147483648
     - char: 1 byte of memory (ASCII Table)
     - bool: A Boolean variable can store either true or false, 1 byte
     - float: used for storing decimal values. 4 bytes of memory
     - double: used for storing decimal values. 8 bytes of memory
     - string: a char series (metin) depolamak icin kullanilir. not primitive types like the above
     but act like that at fundamental usage.
     - void: void herhangi bir degeri olmayan anlamina gelir. deger dondurmeyen islevler icin void
     veri turu kullanilir
     */

    string name2 = "Halit Yesilbas";
    int birthDate = 1980;
    float stdGPA = 3.2f;
    double pi = 3.14159226787912; // double burdaki butun veriyi tutar, o kadar hassastir
    bool isStudentPass = true;
    char stdAvgChar = 65; // 'A' yazacak. ASCII tablosu kullanir. A da yazabilirdik ayni sey.
    int exam1 = 75;
    int exam2 = 85;
    float examAvg = (float)(exam1 + exam2) / 2; // cast etmezsek yine tamsayi yazacak, ikisi de int oldugu icin.
    // float ile yapmanin diger yolu
    float exam3 = 75.0f;
    int exam4 = 85;
    float examAvg2 = (exam3 + exam4) / 2; // cast etmemize gerek kalmadi cunku degiskenlerden biri float

    cout << "\nMerhaba sayin " + name2 << endl;
    cout << "Dogum yili: " << birthDate << endl;
    cout << "Ogrenci GPA: " << stdGPA << endl;
    cout << "Sinifi Gectiniz mi: " << isStudentPass << endl;
    cout << "Sinav Notlari Ortalamasi: " << examAvg << endl;
    cout << "Ogrenci Notu: " << stdAvgChar << endl;

    int x = 10;
    int y = 20;
    int z = x * y;
    int modul = 12 % 10; // % : mod (modulus) operatoru. Bolumunden kalan anlaminda
    cout << z << endl; // output is 200 (10x20=200)
    cout << modul << endl; // output is 2 (12%10=2)


    return 0;
}
