#include <iostream>

using namespace std;

int main() {
	
/////////////////ZADANIE 1/////////////////////////

	//int n=5;

	//for (int i = 0; i < n; ++i)
	//	cout << "petla for: " << i << endl;

	//while (n > 0)
	//{
	//	cout << "petla while: " << n << endl;
	//	--n;
	//}

	//n = 5;

	//do {
	//	cout << "petla do while: " << n << endl;
	//	--n;
	//} while (n > 0);

////////////////ZADANIE 2/////////////////////////////////
	int x, y;
	cin >> x;
	cin >> y;

	//for (int i = 0; i < x+1; ++i) {
	//	for (int j = 0; j < y; ++j) {
	//		
	//		if (i == 0)
	//			cout << " _";
	//		else
	//			cout << "|_";
	//	}
	//	if (i != 0)
	//		cout << "|\n";
	//	else
	//		cout << "\n";
	//}

//////////////////ZADANIE 3/////////////////////////////////////
	int k = 0;

	for (int i = 0; i < y + 1; ++i) {
		for (int j = 0; j < x; ++j) {
			
			if (i == 0)
				cout << " _";
			else
				if (i-1==j || j==x-i)
				{
					cout << "|x";
				}
				else
					cout << "|_";
		}
		if (i != 0)
			cout << "|\n";
		else
			cout << "\n";
	}

	system("PAUSE");
	return 0;
}
