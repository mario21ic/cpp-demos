// Creating and Deleting Dynamic Variables of Basic Types

#include <iostream>
using namespace std;

int main()
{
    int * pint = nullptr;
    cout << "pint = " << pint << endl;
    cout << "sizeof(pint) = " << sizeof(pint) << endl;

    pint = new int;
    cout << "pint = " << pint << endl;
    cout << "sizeof(pint) = " << sizeof(pint) << endl;

    delete pint;
    cout << "pint = " << pint << endl;
    cout << "sizeof(pint) = " << sizeof(pint) << endl;
    
    pint = new int {3333345};
    cout << "*pint = " << * pint << endl;
    cout << "sizeof(pint) = " << sizeof(pint) << endl;
    delete pint;
    return 0;
}