#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateCharges(double h) {
    double m{ 0.00 };
    if (0.00 < h && h <= 3.00) {
        m = 20.00;
    }
    if (3.00 < h && h <= 8.00) {
        double r1{ 0.00 };
        double r2{ 0.00 };
        double r3{ 0.00 };
        double r4{ 0.00 };
        double r5{ 0.00 };
        r1 = (h - 3.00);
        //r2=(((r1*100.0)%100.0)/100.0);
        r2 = (r1 * 100.00);
        r4 = (fmod(r2, 100.00));
        r5 = (r4 / 100.00);
        r3 = (r1 - r5);
        if (0.00 < r4) {
            r3++;
        }
        m = (20.00 + (r3 * 5.00));
    }
    if (8.00 < h && h <= 24.00) {
        m = 50.00;
    }
    return m;
}

int main() {
    double y1;
    double y2;
    double y3;
    cout << setw(3) << "Car" << setw(12) << "Hours" << setw(13) << "Charge" << endl;
    double h1;
    h1 = 1.50;
    cout << setw(1) << "1" << setw(14) << h1 << setw(13) << calculateCharges(h1); cout << endl;
    y1 = calculateCharges(h1);
    double h2;
    h2 = 4.00;
    cout << setw(1) << "2" << setw(14) << h2 << setw(13) << calculateCharges(h2); cout << endl;
    y2 = calculateCharges(h2);
    double h3;
    h3 = 24.00;
    cout << setw(1) << "3" << setw(14) << h3 << setw(13) << calculateCharges(h3); cout << endl;
    y3 = calculateCharges(h3);
    double t;
    t = h1 + h2 + h3;
    double tc;
    tc = y1 + y2 + y3;
    cout << setw(5) << "Total" << setw(10) << t << setw(13) << tc << endl;
}