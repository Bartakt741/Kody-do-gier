
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Algorytm wyznaczający największy wspólny dzielnik \n";
    cout << "Wyznacz liczbę a :";
    cin >> a;
    cout << "Wyznacz liczbę b :";
    cin >> b;
    if (a == b) {
        cout << a;
    }
    c = a * b;
    while (a != b) {
        
        if (a == b) {
            return a;
        }
        else {
            if (a > b) {
                a = a - b;
            }
            else {
                b = b - a;
            }
        }
    }

    cout << "Największym wspólnym Dzielnikiem jest :" << a << "\n";
    cout << "Najmniejsza wspólna wielokrotność to :" << c / a;
  
}
