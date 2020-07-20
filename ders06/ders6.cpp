#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int sayac1 = 1;
	int sayac2 = 0;
	if (sayac1 == 0)
	{
		cout << "Sayac1 = 0" << endl;
	} else if (sayac1 == 1)
	{
		if (sayac2 == 1)
		{
			cout << "Sayac2 = 1, Sayac1 = 1" << endl;
		} else
		{
			cout << "Sayac2 = 0, Sayac1 = 1" << endl;
		}
		
		
	} else
	{
		cout << "Sayac1 farkli bir sayi" << endl;
	}

	int sayi1, sayi2;

	sayi1 = 0; sayi2 = 2;

	if (sayi1 == 0 && sayi2 == 1) // && -> ve
	{
		cout << "sayi1: " << sayi1 << endl << "sayi2: " << sayi2 << endl; 
	} else
	{
		cout << "degerle uyumsuz" << endl;
	}

	int sayi3, sayi4;
	sayi3 = 2; sayi4 = 0;
	if (sayi3 == 1 || sayi4 == 1) // || -> veya 1+0 = 1 
	{
		cout << "sayi3: " << sayi3 << endl << "sayi4: " << sayi4 << endl; 
	} else
	{
		cout << "degerler uyumsuz" << endl;
	}
	
	
	int deger1, deger2, deger3, deger4;
	deger1 = 0; deger2 = 1; deger3 = 0; deger4 = 0;
	if ((deger1 == 0 && deger2 == 0) || (deger3 == 0 && deger4 == 1)) // 0-0 -> 0 ------- 0 + 1 -> 1
	{
		cout << "basarili" << endl;
	} else
	{
		cout << "basarisiz" << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
