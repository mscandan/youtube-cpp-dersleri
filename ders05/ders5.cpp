#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int degisken1;
	cout << "Deger giriniz: ";
	cin >> degisken1;
	cout << "Girilen deger: " << degisken1 << endl;
	

	int degisken2, degisken3;
	cout << "Degisken2 ve Degisken3 icin deger giriniz: ";
	cin >> degisken2 >> degisken3;
	cout << "Degisken2: " << degisken2 << endl;
	cout << "Degisken3: " << degisken3 << endl;
 
	string s1;
	cout << "s1 icin deger giriniz: "; 
	cin.ignore();
	getline(cin, s1);
	cout << "s1: " << s1 << endl;
	

	return 0;
}
