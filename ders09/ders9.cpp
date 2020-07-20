#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int sayi = 0;
	int sayi2 = 2;
	while (sayi < 10 && sayi2 < 20)
	{
		cout << "Sayi: " << sayi << endl;
		sayi++;
		cout << "Sayi2: " << sayi2 << endl;
		sayi2 *= 2;
	}
	cout << "Dongu bitimi sayi1 degeri: " << sayi << endl;
	cout << "Dongu bitimi sayi2 degeri: " << sayi2 << endl;


	int sayac = 0;
	do
	{
		cout << "sayac: " << sayac << endl;
		sayac++;
	} while (sayac < 0);
	cout << "Dongu bitimi sayac degeri: " << sayac << endl;

	int sayac2 = 0;
	while (sayac2 < 0)
	{
		cout << "sayac2: " << sayac2 << endl;
		sayac2++;
	}
	

	return 0;
}
