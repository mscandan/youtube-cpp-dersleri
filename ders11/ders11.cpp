#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  
  int secim = 5;
  int sayi1, sayi2;
  while (secim != 9)
  {
    cout << "Toplama -> 1" << endl;
    cout << "Cikarma -> 2" << endl;
    cout << "Carpma -> 3" << endl;
    cout << "Bolme -> 4" << endl;
    cout << "Karekok -> 5" << endl;
    cout << "Mod Alma -> 6" << endl;
    cout << "Yapmak istediginiz islemi secin: "; cin >> secim;
    if (secim == 1)
    {
      cout << "Toplama" << endl;
      cout << "sayi1'i giriniz: "; cin >> sayi1;
      cout << "sayi2'yi giriniz: "; cin >> sayi2;
      cout << "sayi1 + sayi2 = " << sayi1 + sayi2;
    } else if (secim == 2)
    {
      cout << "Cikarma" << endl;
      cout << "sayi1'i giriniz: "; cin >> sayi1;
      cout << "sayi2'yi giriniz: "; cin >> sayi2;
      cout << "sayi1 - sayi2 = " << sayi1 - sayi2;
    }else if (secim == 3)
    {
      cout << "Carpma" << endl;
      cout << "sayi1'i giriniz: "; cin >> sayi1;
      cout << "sayi2'yi giriniz: "; cin >> sayi2;
      cout << "sayi1 * sayi2 = " << sayi1 * sayi2;
    }
    else if (secim == 4)
    {
      cout << "Bolme" << endl;
      cout << "sayi1'i giriniz: "; cin >> sayi1;
      cout << "sayi2'yi giriniz: "; cin >> sayi2;
      cout << "sayi1 / sayi2 = " << sayi1 / sayi2;
    }else if (secim == 5)
    {
      cout << "Karekok" << endl;
      cout << "Karakoku alinacak sayiyi giriniz: "; cin >> sayi1;
      cout << "Karakok " << sayi1 << "= " << sqrt(sayi1) << endl;
    }else if (secim == 6)
    {
      cout << "Mod alma" << endl;
      cout << "sayi1'i giriniz: "; cin >> sayi1;
      cout << "sayi2'yi giriniz: "; cin >> sayi2;
      cout << "sayi1 mod sayi2 = " << sayi1 % sayi2 << endl;
    }
    else
    {
      cout << "Hatali secim yaptiniz program kapanacak..." << endl;
      secim =  9;
    }
    
  }
  

  return 0;
}
