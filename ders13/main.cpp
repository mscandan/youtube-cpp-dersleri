/*
 * 10x10 boyutundaki bir matrisin tum elemanlari 1-100 arasinda rastgele siralanacaktir
 * matrisin tum elemanlari farkli olacaktir
 * matrisi kucukten buyuge ve buyukten kucuge sirala ve ekrana yazdir
*/

#include <iostream>
#include <time.h>

using namespace std;

void matrisYazdir(int matris[10][10]);
void matrisKontrol(int matris[10][10]);
void buyukten(int matris[10][10]);
void kucukten(int matris[10][10]);

int main(int argc, char *argv[])
{
  int matris[10][10];

 srand(time(0));
 for(int i =0; i < 10; i++){
    for (int j = 0; j < 10; j++) {
      matris[i][j] = rand() % 100 + 1;
    }
  }

  // kontrol edilmis matrisi yaz
  cout << "Kontrol edilmis matris" << endl;
  matrisKontrol(matris);
  matrisYazdir(matris);
  // matris kontrol edildi ve ekrana yazdirildi
  cout << endl;
  cout << "Buyukten kucuge siralanmis matris" << endl;
  buyukten(matris);
  matrisYazdir(matris);
  cout << endl;
  cout << "Kucukten buyuge siralanamis matris" << endl;
  kucukten(matris);
  matrisYazdir(matris);
  return 0;
}

void matrisYazdir(int matris[10][10]){
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << matris[i][j] << "\t";
    }
    cout << endl;
  }
}


void matrisKontrol(int matris[10][10]) {
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        for(int l= 0; l<10; l++){
          if(i == k && j == l) {
            break;
          }
          if(matris[i][j] == matris[k][l]) {
            matris[i][j] = rand() % 100 + 1;
            i = 0;
            j=0;
            k=0;
            l=0;
          }
        }
      }
    }
  }
}


void buyukten(int matris[10][10]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        for(int l= 0; l<10; l++){
          if(i == k && j == l) {
            break;
          }
          if(matris[i][j] > matris[k][l]){
            int gecici = matris[i][j];
            matris[i][j] = matris[k][l];
            matris[k][l] = gecici;
          }
        }
      }
    }
  }
}


void kucukten(int matris[10][10]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        for(int l= 0; l<10; l++){
          if(i == k && j == l) {
            break;
          }
          if(matris[i][j] < matris[k][l]){
            int gecici = matris[i][j];
            matris[i][j] = matris[k][l];
            matris[k][l] = gecici;
          }
        }
      }
    }
  }
}

