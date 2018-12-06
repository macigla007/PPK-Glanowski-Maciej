#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
	srand(time(NULL));
	int suma = 0;
	int srednia, min, max;
	
	int *tab = new int [100000];

	fstream plik;
	bool is_open;

	plik.open("oper.txt", ios::out);

	for (int i = 0; i < 10000; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			plik << (rand() % 50 + 7) << " ";
		}
		plik << endl;
	}
		plik.close();

		plik.open("oper.txt", ios::in);

		if (plik.is_open() == false)
		{
			cout << "Nie udalo sie wczytac pliku" << endl;
		}

		int i = 0;
		while (!plik.eof())
		{
			plik >> tab[i++];
		}

		plik.close();

		for (int j = 0; j < 100000; ++j)
			suma += tab[j];

		srednia = suma / 100000;

		min = tab[0];
		max = tab[0];

		for (int i = 0; i < 100000; i++)
		{
			if (min > tab[i])
			{
				min = tab[i];
			}

			if (max < tab[i])
			{
				max = tab[i];
			}
		}

		cout << "Srednia: " << srednia << endl;
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;

		plik.open("art.txt", ios::out);

		if (plik.is_open() == false)
		{
			cout << "Nie udalo sie wczytac pliku" << endl;
		}

		char litera;
		int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0;
		while (!plik.eof())
		{
			litera = getchar();

			if (litera == 'a' || litera == 'A') a++;
			if (litera == 'b' || litera == 'B') b++;
			if (litera == 'c' || litera == 'C') c++;
			if (litera == 'd' || litera == 'D') d++;
			if (litera == 'e' || litera == 'E') e++;
			if (litera == 'f' || litera == 'F') f++;
			if (litera == 'g' || litera == 'G') g++;
			if (litera == 'h' || litera == 'H') h++;
		}

		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;
		cout << "d: " << d << endl;
		cout << "e: " << e << endl;
		cout << "f: " << f << endl;
		cout << "g: " << g << endl;
		cout << "h: " << h << endl;

		system("PAUSE");
		return 0;

}