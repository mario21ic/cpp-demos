// Static example.
#include <iostream>
#include <string>

int MyInt()
{
    // int myInt = 0; // output 11111
    static int myInt = 0; // output 12345
    return ++myInt;
}

int main() 
{
    std::cout << "Starting" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << MyInt();
    }
}