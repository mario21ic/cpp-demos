#include<iostream>
using namespace std;

// Type Modifiers: signed, unsigned, long, long long, short
// Built-In Types: bool, int, char, float, double, void, wide character

int main()
{
    bool myBool = false;

    int myInt = -12;
    unsigned int unsignedInt = 14;
    
    short int shortInt = -5;
    unsigned short int unsignedShortInt = 5;
    
    long int longInt = -50;
    unsigned long int unsignedLongInt = 52;
    long long int longLongInt = -50;
    unsigned long long int unsignedLongLongInt = -50;

    char myChar = 'a';
    unsigned char unsignedChar = 'b';

    float myFloat = 12.5;
    double myDouble = 12.6;

    std::cout << "The size of\n============" << std::endl;
    std::cout << "Bool is " << sizeof(myBool) << ".\n";
    std::cout << "Int is " << sizeof(myInt) << ".\n";
    std::cout << "Unsigned Int is " << sizeof(unsignedInt) << ".\n";
    std::cout << "Short Int is " << sizeof(shortInt) << ".\n";
    std::cout << "Unsigned Short Int is " << sizeof(unsignedShortInt) << ".\n";
    std::cout << "Long Int is " << sizeof(longInt) << ".\n";
    std::cout << "Unsigned Long Int is " << sizeof(unsignedLongInt) << ".\n";
    std::cout << "Long Long Int is " << sizeof(longLongInt) << ".\n";
    std::cout << "Unsigned Long Long Int is " << sizeof(unsignedLongLongInt) << ".\n";
    std::cout << "Char is " << sizeof(myChar) << ".\n";
    std::cout << "Unsigned Char is " << sizeof(unsignedChar) << ".\n";
    std::cout << "Float is " << sizeof(myFloat) << ".\n";
    std::cout << "Double is " << sizeof(myDouble) << ".\n";
    
    return 0;
}