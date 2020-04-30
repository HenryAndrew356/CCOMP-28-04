#include <iostream>
using namespace std;
int main()
{
    int n1{ 0 };
    int n2{ 1 };
    int num{ 0 };
    while (true) {
        num = n1 + n2;
        n1 = n2;
        n2 = num;
        cout << num << endl;
        //Sucede lo que se llama como "Desbordamiento aritmetico", de acuerdo a la capacidad que tiene el tipo de dato en este caso el "int".
    
    }
}