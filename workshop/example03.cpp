#include <iostream>
#include<string>
#define MULTIPLY(a,b) (a * b)
#define HELLO_WORLD "Hello World!"

int main()
{
    std::cout << MULTIPLY(3, 4) << std::endl;

    std::cout << HELLO_WORLD << std::endl;
    #undef HELLO_WORLD
    // std::cout << HELLO_WORLD << std::endl;

    return 0;
}