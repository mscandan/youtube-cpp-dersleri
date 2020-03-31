#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int secim;
	int sayi1, sayi2;
	while (secim != 5)
	{
		cout << "Toplama islemi icin -> 1" << endl;
		cout << "Cikarma islemi icin -> 2" << endl;
		cout << "Çarpma islemi icin -> 3" << endl;
		cout << "Bölme islemi icin -> 4" << endl;
		cout << "Cikis -> 5" << endl;
		cout << "Seciminiz: "; cin >> secim;
		switch (secim)
		{
		case 1:
			cout << "Toplama Islemi" << endl;
			cout << "Birinci sayiyi giriniz: "; cin >> sayi1;
			cout << "Ikinci sayiyi giriniz: "; cin >> sayi2;
			cout << "Sonuc = " << sayi1 + sayi2 << endl;
			break;
		case 2:
			cout << "Cikarma Islemi" << endl;
			cout << "Birinci sayiyi giriniz: "; cin >> sayi1;
			cout << "Ikinci sayiyi giriniz: "; cin >> sayi2;
			cout << "Sonuc = " << sayi1 - sayi2 << endl;
			break;
		case 3:
			cout << "Carpma Islemi" << endl;
			cout << "Birinci sayiyi giriniz: "; cin >> sayi1;
			cout << "Ikinci sayiyi giriniz: "; cin >> sayi2;
			cout << "Sonuc = " << sayi1 * sayi2 << endl;
			break;
		case 4:
			cout << "Bolme Islemi" << endl;
			cout << "Birinci sayiyi giriniz: "; cin >> sayi1;
			cout << "Ikinci sayiyi giriniz: "; cin >> sayi2;
			cout << "Sonuc = " << sayi1 / sayi2 << endl;
			break;
		case 5:
			cout << "Program kapaniyor..." << endl;
		default:
			break;
		}
	}
	return 0;
}
