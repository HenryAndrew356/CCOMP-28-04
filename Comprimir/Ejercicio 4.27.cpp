#include <iostream>
using namespace std;
int main()
{
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
    int n;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> n;
    p5 = n % 10;
    p4 = (n / 10) % 10;
    p3 = (n / 100) % 10;
    p2 = (n / 1000) % 10;
    p1 = (n / 10000) % 10;
    if (p5 == p1 && p4 == p2) {
        cout << n << " es un numero palindrome.";
    }
    else { cout << n << " no es un palindrome.\n\n"; }
    return 0;
}