#include <iostream>
#include<iomanip>
using namespace std;
bool isFactor(int x, int y) {
    if ((x % y) == 0) {
        return true;
    }
    else { return false; }
}
int main() {
    for (int i = 10; i <= 100; i += 10) {
        for (int y = 1; y <= 10; y++) {
            cout << "" << y << " es factor? de " << i << "  Repta: " << boolalpha << isFactor(i, y) << endl;
        }
    }
}