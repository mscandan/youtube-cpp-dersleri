#include <iostream>

using namespace std;

int topla(int sayi1, int sayi2);
int cikar(int sayi1, int sayi2);
int carp(int sayi1, int sayi2);
float bol(float sayi1, float sayi2);

int main(int argc, char *argv[])
{
  // return ve fonksiyon kavramlari
  cout << topla(10, 20)<< endl;
  cout << cikar(10, 20)<< endl;
  cout << carp(10, 20)<< endl;
  cout << bol(10, 20)<< endl;

  return 0;
}

int topla(int sayi1, int sayi2) {
   return sayi1 + sayi2;
}

int cikar(int sayi1, int sayi2) {
  return sayi1 -sayi2;
}

int carp(int sayi1, int sayi2) {
  return sayi1 *sayi2;
}

float bol(float sayi1, float sayi2) {
  return sayi1 /sayi2;
}
