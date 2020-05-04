#include <iostream>
#include<iomanip>
using namespace std;
void diference(int d, int h, int m) {
    int td;
    td = d * 1440 + h * 60 + m;
    cout << "Desde el inicio del mes transcurrieron " << td << " minutos.";
}
int main() {
    diference(10, 20, 15);
}