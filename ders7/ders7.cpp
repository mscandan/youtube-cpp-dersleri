#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int secim;
	int sayi1, sayi2;
	cout << "Seciminizi giriniz: "; cin >> secim;
	switch (secim)
	{
	case 1:
		cout << "Toplanacak sayilari giriniz: "; cin >> sayi1 >> sayi2;
		cout << "Toplam =  " << sayi1 + sayi2 << endl;
		break;
	case 2:
		// int sayi1, sayi2;
		cout << "Cikarilacak sayilari giriniz: "; cin >> sayi1 >> sayi2;
		cout << "Iki sayinin farki: " << sayi1 - sayi2 << endl;
		break;
	default:
		cout << "hatali" << endl;
		break;
	}

	if (secim == 1)
	{
		cout << "Toplanacak sayilari giriniz: "; cin >> sayi1 >> sayi2;
		cout << "Toplam =  " << sayi1 + sayi2 << endl;
	} else if (secim == 2)
	{
		cout << "Cikarilacak sayilari giriniz: "; cin >> sayi1 >> sayi2;
		cout << "Iki sayinin farki: " << sayi1 - sayi2 << endl;
	} else
	{
		cout << "hatali" << endl;
	}
	
	
	


	return 0;
}
