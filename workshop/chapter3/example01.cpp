#include<iostream>
#include<array>
using namespace std;

int main()
{
    std::cout << "Declarando" << std::endl;
    int customerAges1[5];
    for (int i=0; i < 5; i++) {
        std::cout << "Valor: " << customerAges1[i] << " Address: " << &customerAges1[i] << std::endl;
    }

    std::cout << "Iniciando en blanco" << std::endl;
    int customerAges2[5] = {};
    for (int i=0; i < 5; i++) {
        std::cout << "Valor: " << customerAges2[i] << " Address: " << &customerAges2[i] << std::endl;
    }

    std::cout << "Asignando valores Int" << std::endl;
    int customerAges3[5] = {1, 2, 3, 4, 5};
    short int customerSize3 = sizeof(customerAges3)/sizeof(customerAges3[0]);
    for (int i=0; i < customerSize3; i++) {
        std::cout << "Valor: " << customerAges3[i] << " Address: " << &customerAges3[i] << std::endl;
    }

    std::cout << "Asignando valores Short Int" << std::endl;
    std::array<short int, 5> customerAges4 {1, 2, 3, 4, 5};
    short int customerSize4 = sizeof(customerAges3)/sizeof(customerAges3[0]);
    for (int i=0; i < customerSize4; i++) {
        std::cout << "Valor: " << customerAges4[i] << " Address: " << &customerAges4[i] << std::endl;
    }

    int myArray[5] = {1, 2, 3, 4, 5};
    int mySecondValue = myArray[1];
}