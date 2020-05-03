#include <iostream>
using namespace std;
int main()
{
    int r;
    int c{ 1 };
    int x;
    int m{ 1 };
    int num{ 0 };
    cout << "Ingrese un numero binario: ";
    cin >> x;
    while (c != 0) {
        c = x / 10;
        r = (x % 10) * m;
        num = num + r;
        m = m * 2;
        x = c;
    }
    cout << num;
}