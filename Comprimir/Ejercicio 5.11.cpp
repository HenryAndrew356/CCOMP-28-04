#include <iostream>
using namespace std;
int main()
{
    int a, b, i; 
    int w{ 0 };
    cout << "Numero de valores a comparar: ";
    cin >> a;
    for (i = 0; i < a; i++) {
        cout << "Introduzca el numero a comparar: ";
        cin >> b;
        if (w > b || w == 0) {
            w = b;
        }
    }
    cout << "El menor numero es: " << w<<endl;
}