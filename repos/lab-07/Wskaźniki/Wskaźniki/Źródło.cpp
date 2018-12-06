#include <iostream>

using namespace std;

int main() {
	int zmienna, N, M;
	cout << "Podaj rozmiar tablicy jednowymiarowej: ";
	cin >> zmienna;
	cout << "Podaj rozmiar tablicy dwuwymiarowej N: ";
	cin >> N;
	cout << "\nM: ";
	cin >> M;
	

	int *tab = new int[zmienna];
	int *temp = new int[N*M];
	int **tab2 = new int *[N];

	for (int i = 0; i < N; i++)
	{
		tab2[i] = new int[M];
	}


	for (int i = 0; i < zmienna; i++)
	{
		int a = ((i*zmienna)*4)/2;

		*(tab+i) = (a*i)/zmienna;
	}

	int mediana1;
	if (zmienna % 2 == 0)
	{
		mediana1 = tab[(zmienna - 1) / 2] + tab[zmienna / 2];
		mediana1 = mediana1 / 2;
	}
	else {
		mediana1 = tab[zmienna / 2];
	}
	cout << "Mediana tablicy 1 wym : " << mediana1 << endl;

	int z = 0;

	for(int i=0; i<N; i++)
		for (int j = 0; j < M; j++)
		{
			int a = (((N - 2) + (M + 8)) / 2) - 3;

				tab2[i][j] = a;
				temp[z] == tab2[i][j];
		}

	int mediana2;
	if ( z % 2 == 0)
	{
		mediana2 = tab[( z- 1) / 2] + tab[ z/ 2];
		mediana2 = mediana1 / 2;
	}
	else {
		mediana2 = tab[zmienna / 2];
	}
	cout << "Mediana tablicy 2 wym : " << mediana2 << endl;

	system("PAUSE");
	return 0;
}