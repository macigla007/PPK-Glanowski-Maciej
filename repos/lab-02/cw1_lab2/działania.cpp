#include <iostream>
#include <math.h>

using namespace std;

///////////////æwiczenie 1////////////////////////
//int main() { 
//	
//	int a;
//	int b;
//
//	cout << "Wprowadz liczbe a: ";
//	cin >> a;
//	cout << "Wprowadz liczbe b: ";
//	cin >> b;
//
//	float dzi = a / b;
//	cout << a + b << endl;
//	cout << a - b << endl;
//	cout << a * b << endl;
//	cout << dzi << endl;
//
//	system("PAUSE");
//	return 0;
//}

///////////æwiczenie 2//////////////////

//int main() {
//	int a, b, c, z;
//	int x1, x2;
//	int delta;
//
//	cout << "Wprowadz liczbe a: ";
//		cin >> a;
//	cout << "Wprowadz liczbe b: ";
//		cin >> b;
//	cout << "Wprowadz liczbe c: ";
//		cin >> c;
//
//		delta = (b *b) - (4 *a*c);
//		cout <<"delta = " << delta << endl;
//
//		if (delta < 0)
//		{
//			cout << "rownanie nie posiada rozwiazan" << endl;
//			cin >> z;
//			return 0;
//		}
//
//		x1 = (-b - sqrt(b * b - 4 * a*c)) / (2 * a);
//		x2 = (-b + sqrt(b * b - 4 * a*c)) / (2 * a);
//
//		if (delta == 0)
//			cout << "rownanie posiada jedno rozwiazanie x1= " << x1 <<endl;
//
//		if (delta > 0)
//			cout << "rownanie ma dwa rozwiazania x1 = " << x1 << " x2 = " << x2 << endl;
//
//		system("PAUSE");
//		return 0;
//}

////////////æwiczenie 3////////////////////

int main() {
	int a1, b1, c1, a2, b2, c2;
	int W, Wx, Wy;
	int x, y;
	
		cout << "Wprowadz liczbe a1: ";
			cin >> a1;
		cout << "Wprowadz liczbe a2: ";
			cin >> a2;
		cout << "Wprowadz liczbe b1: ";
			cin >> b1;
		cout << "Wprowadz liczbe b2: ";
			cin >> b2;
		cout << "Wprowadz liczbe c1: ";
			cin >> c1;
		cout << "Wprowadz liczbe c2: ";
			cin >> c2;
	
			W = (a1 * b2) - (a2 * b1);
			Wx = c1 * b2 - b1 * c2;
			Wy = a1 * c2 - c1 * a2;

			if (W!= 0) 
			{
				cout << "x = " << Wx / W << endl;
				cout << "y = " << Wy / W << endl;
			}
			else 
			{
				if((Wx == 0 && Wy == 0))
					cout << "Uklad ma nieskonczenie wiele rozwiazan!";
				else
					cout<< "Uklad jest sprzeczny!" << endl;
			}
			
	system("PAUSE");
	return 0;
}