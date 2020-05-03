#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double t{ 0.0 };
    double x{ 1.0 };
    double pi{ 0.000000 };
    double cr{ 2.0 };
    double c{ 4.0 };
    cout << "\nValor de PI aproximado utilizando los 200 000 primeros terminos.\n\n";
    cout << "          Tabla\n\nParte Inferior\tParte Superior\n";
    while (t <= 200000) {
        if (t == 200000) { cout << "   " << pi << "\t        "; }
        pi += (c / x);
        t++;
        x += cr;
        if (t == 200001) { cout << pi << endl; }
        pi -= (c / x);
        x += cr;
        t++;

    }
    t = 1.0;
    x = 3.0;
    pi = 4.0;
    cr = 2.0;
    c = 4.0;
    cout << "\n\nLa cantidad de Terminos para que PI inicie con 3.14159 es ";
    while (true) {
        pi -= (c / x);
        t++;
        x += cr;
        pi += (c / x);
        x += cr;
        t++;
        if (pi <= 3.1416) {
            cout << t << "." << endl;
            break;
        }
    }
}