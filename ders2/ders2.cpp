#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// Değişken tanımlama ve değer atama

	int tamsayi;
	float ondalikliSayi;
	double ondalikliSayilar;
	char karakter;
	bool trueFalse, trueFalse2;

	tamsayi = 3;
	ondalikliSayi = 4.2;
	ondalikliSayilar = 7.354;
	karakter = 'A';
	trueFalse = true; // true 1 false 0
	trueFalse2 = false;

	cout << "tamsayi degiskenin degeri: " << tamsayi << endl;
	cout << "ondalikliSayi degiskenin degeri: " << ondalikliSayi << endl;
	cout << "ondalikliSayilar degiskenin degeri: " << ondalikliSayilar << endl;
	cout << "karakter degiskenin degeri: " << karakter << endl;
	cout << "trueFalse degiskenin degeri: " << trueFalse << endl;
	cout << "trueFalse2 degiskenin degeri: " << trueFalse2 << endl;

	// Aritmetik İfadeler
	int degisken1, degisken2;

	degisken1 = 10;
	degisken2 = 6;

	cout << "iki değişkenin toplamı: " << degisken1 + degisken2 << endl;
	cout << "iki değişkenin farkı: " << degisken1 - degisken2 << endl;
	cout << "iki değişkenin çarpımı: " << degisken1 * degisken2 << endl;
	cout << "iki değişkenin bölümü: " << degisken1 / degisken2 << endl;


	degisken1 += degisken2; // degisken1 = degisken1 + degisken2
	cout << "degisken1 yeni deger: " << degisken1 << endl;
	degisken1 -= degisken2; // degisken1 = degisken1 - degisken2
	cout << "degisken1 yeni deger: " << degisken1 << endl;


	degisken2++; // degisken2 = degisken2 + 1;
	cout << "degisken2 yeni deger: " << degisken2 << endl;
	degisken2--; // degisken2 = degisken2 - 1;
	cout << "degisken2 yeni deger: " << degisken2 << endl;


	int degisken3 = 15;
	cout << "degisken3 degeri: " << degisken3 << endl; // ekrana = 15 || deger = 15
	cout << "degisken3++ degeri: " << degisken3++ << endl; // ekrana = 15 || deger = 16
	cout << "degisken3 degeri: " << degisken3 << endl; // ekrana = 16 || deger = 16
	cout << "++degisken3 degeri: " << ++degisken3 << endl; // ekrana = 17 || deger = 17
	return 0;
}
