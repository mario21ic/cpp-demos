#include<iostream>

using namespace std;

int main() {
    int num1 = 500;
    //int *pnum1 = &num1;
    int num2 = 500;
    int num3 = 8;
    int num4 = 8;

    cout << "La posicion de num1 es: " << &num1 << std::endl;
    cout << "La posicion de num2 es: " << &num2 << std::endl;
    cout << "La posicion de num3 es: " << &num3 << std::endl;
    cout << "La posicion de num4 es: " << &num4 << std::endl;
    return 0;
}

