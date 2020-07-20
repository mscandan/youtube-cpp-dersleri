#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int sayac;
	for (sayac = 2; sayac < 20; sayac *= 2)
	{
		cout << "sayac = " << sayac << endl;
	}
	cout << "dongu bitimi sayac degeri = " << sayac << endl;

	cout << "matris ornegi" << endl;
	int matris[3][3];
	matris[0][0] = 1;
	matris[0][1] = 2;
	matris[0][2] = 3;
	matris[1][0] = 4;
	matris[1][1] = 5;
	matris[1][2] = 6;
	matris[2][0] = 7;
	matris[2][1] = 8;
	matris[2][2] = 9;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matris[i][j] << "\t";
		}
		cout << endl;
	}
	



	return 0;
}
