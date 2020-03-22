#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int dizi1[10]; // [] -> eleman sayısını
	dizi1[0] = 1;
	dizi1[1] = 2;
	dizi1[2] = dizi1[0] + dizi1[1];

	cout << "1. eleman: " << dizi1[0] << endl;
	cout << "2. eleman: " << dizi1[1] << endl;
	cout << "3. eleman: " << dizi1[2] << endl;
	cout << "4. eleman: " << dizi1[3] << endl;
	cout << "5. eleman: " << dizi1[4] << endl;


	char dizi2[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
	cout << "1. eleman: " << dizi2[0] << endl;
	cout << "2. eleman: " << dizi2[1] << endl;
	cout << "3. eleman: " << dizi2[2] << endl;
	cout << "4. eleman: " << dizi2[3] << endl;
	cout << "5. eleman: " << dizi2[4] << endl;

	string dizi3 = "ABCDEFGHIJ";
	cout << "1. eleman: " << dizi3[0] << endl;
	cout << "2. eleman: " << dizi3[1] << endl;
	cout << "3. eleman: " << dizi3[2] << endl;
	cout << "4. eleman: " << dizi3[3] << endl;
	cout << "5. eleman: " << dizi3[4] << endl;

	int matris[3][3]; // 3x3 = 9
	matris[0][0] = 1; // 1. satır 1. sütun
	matris[0][1] = 2; // 1. satır 2. sütun
	matris[0][2] = 3; // 1. satır 3. sütun
	matris[1][0] = 4;
	matris[1][1] = 5;
	matris[1][2] = 6;
	matris[2][0] = 7;
	matris[2][1] = 8;
	matris[2][2] = 9;

	cout << "1. satır 1. sütun: " << matris[0][0] << endl;
	cout << "1. satır 2. sütun: " << matris[0][1] << endl;
	cout << "1. satır 3. sütun: " << matris[0][2] << endl;
	cout << "2. satır 1. sütun: " << matris[1][0] << endl;
	cout << "2. satır 2. sütun: " << matris[1][1] << endl;
	cout << "2. satır 3. sütun: " << matris[1][2] << endl;
	cout << "3. satır 1. sütun: " << matris[2][0] << endl;
	cout << "3. satır 2. sütun: " << matris[2][1] << endl;
	cout << "3. satır 3. sütun: " << matris[2][2] << endl;


	cout << "Matris: " << endl;
	cout << matris[0][0] << "\t" << matris[0][1] << "\t" << matris[0][2] << endl;
	cout << matris[1][0] << "\t" << matris[1][1] << "\t" << matris[1][2] << endl;
	cout << matris[2][0] << "\t" << matris[2][1] << "\t" << matris[2][2] << endl;

	int dizi4[10][10][10][100]; // 10x10x10x100 = 100000

	return 0;
}
