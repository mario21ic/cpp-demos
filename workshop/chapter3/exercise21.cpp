// Static example.
#include <iostream>
#include <string>

int MyInt()
{
    // int myInt = 0;
    static int myInt = 0;
    return ++myInt;
}

int main() 
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << MyInt();
    }
}