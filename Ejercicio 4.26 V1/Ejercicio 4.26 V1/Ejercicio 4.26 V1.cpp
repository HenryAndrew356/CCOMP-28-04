#include <iostream>
using namespace std;
const char SIMBOLO = '*';
int main()
{
    int n;
    cout << " Introduzca un numero : ";
    cin >> n;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if ((i == 0 || i == (n - 1)) || (j == 0 || j == (n - 1))) {
                cout << SIMBOLO;
            }
            else { cout << " "; }
        }
        cout << endl;
    }
}