
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	b = 0;
	cout << "Program znajdujący równania kwadratowe \n";
	cout << "podaj liczbę którą chcesz zpierwiastkować :";
	cin >> c;
	a = c;	
	cout << "Podaj pierwiastek :";
	cin >> b;

	for (int d = 0; d <= b; d++) {
		a = a * c;
		cout << a << " \n";
	}
	
}
