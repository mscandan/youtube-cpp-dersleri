#include <iostream>
#include <string>

using namespace std;

string hedefStringAl();
char aranacakSembolAl();
int arananiBul(string yazi, char karakter);

int main(int argc, char const *argv[])
{
    string hedef = hedefStringAl();
    char aranan = aranacakSembolAl();
    cout << "hedef = " << hedef << endl;
    cout << "aranan = " << aranan << endl;
    int sayi = arananiBul(hedef, aranan);
    cout << "bulunan = " << sayi << endl;
    return 0;
}

string hedefStringAl(){
    string girdi; 
    cout << "Hedef stringi giriniz : ";
    getline(cin, girdi);
    return girdi;
}

char aranacakSembolAl() {
    char sembol;
    cout << "String icinde aranacak sembolu giriniz : "; cin >> sembol;
    return sembol;
}

int arananiBul(string yazi, char karakter) {
    int bulunan = 0;
    for (int i = 0; i < yazi.length(); i++)
    {
       if(yazi[i] == karakter) {
           bulunan++;
       }
    }
    return bulunan; 
}
