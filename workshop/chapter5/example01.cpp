// Memory address & pointers
#include <iostream>
#include <string>


int main()
{
    int myInt = 12345;
    int* myPointer = &myInt;
    int myVar = myInt;

    std::cout << "myInt: " << myInt << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(myInt): " << sizeof(myInt) << std::endl;

    std::cout << "===" << std::endl;
    std::cout << "myPointer: " << myPointer << std::endl;
    std::cout << "&myPointer: " << &myPointer << std::endl;

    // int dif_addr = int(&myPointer) - int(myPointer);
    // std::cout << "&myPointer: " << dif_addr << std::endl;

    std::cout << "===" << std::endl;
    std::cout << "myVar: " << myVar << std::endl;
    std::cout << "sizeof(myVar): " << sizeof(myVar) << std::endl;
    std::cout << "&myVar: " << &myVar << std::endl;
}
