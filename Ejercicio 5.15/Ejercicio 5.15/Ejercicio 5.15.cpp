#include <iostream>
using namespace std;
int main()
{
    int i;
    int z;
    int x;
    cout << "\na)\n";
    for (i = 1; i <= 10; i++) {
        for (z = 1; z <= i; z++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\nb)\n";
    for (i = 10; i > 0; i--) {
        for (z = 1; z <= i; z++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\nc)\n";
    for (i = 1; i <= 10; i++) {
        for (z = 1; z < i; z++) {
            cout << " ";
        }
        for (int x = 10; x >= i; x--) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\nd)\n";
    for (i = 1; i <= 10; i++) {
        for (z = 10; z > i; z--) {
            cout << " ";
        }
        for (int x = 1; x <= i; x++) {
            cout << "*";
        }
        cout << "\n";
    }
}