#include <iostream>
using namespace std;
double potencia(int, int);
int main()
{
    int x, y;
    cout << "Introduccir base: ";
    cin >> x;
    cout << "Intriduzca el exponente: ";
    cin >> y;
    cout << potencia(x, y) << endl;
}
double potencia(int x, int y) {
    if (y == 0) {
        return 1;
    }
    else { return x * potencia(x, (y - 1)); }
}
