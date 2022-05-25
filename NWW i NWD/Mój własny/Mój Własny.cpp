
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "algorytm wyznaczający największy wspólny dzielnik \n";
    cout << "wyznacz liczbę a :";
    cin >> a;
    cout << "wyznacz liczbę b :";
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
    cout << "NAjmniejsza wspólna wielokrotność to :" << c / a;
  
}
