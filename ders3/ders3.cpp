#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string degisken1;
	degisken1 = "merhaba";
	cout << "degisken1: " << degisken1 << endl;

	string degisken2("dünya");
	cout << "degisken2: " << degisken2 << endl;

	string degisken3 = "selcuk";
	string degisken4;
	degisken4.assign(degisken3);
	cout << "degisken4: " << degisken4 << endl;

	string degisken5 = "merhaba dunya";
	cout << degisken5[0] << endl; // 0'dan başlar 
	cout << degisken5.at(1) << endl;

	int degisken5_uzunluk = degisken5.length();
	cout << "degisken5 uzunluk: " << degisken5_uzunluk << endl;

	string degisken6 = "selcuk candan";
	int degisken6_uzunluk = degisken6.length();
	cout << "degisken6 uzunluk: " << degisken6_uzunluk << endl;

	string str1 = "merhaba";
	string str2 = "dunya";
	string str3 = str1 + " " +str2;
	cout << "str3: " << str3 << endl;


	// substr


	string s1 = "c++ dersleri";
	string s2 = s1.substr(0,3);
	cout << "s2: " << s2 << endl;
	string s3 = s1.substr(4, 8);
	cout << "s3: " << s3 << endl;
	
	return 0;
}
