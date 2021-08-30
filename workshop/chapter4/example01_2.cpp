// Arithmetic operators.
#include <iostream>
#include <string>

int main()
{

    int myInt = 3;
    int addition = myInt + 4;

    // Determine if a number is even.
    bool isEven = myInt % 2 == 0;

    // Print multiples of 5.
    for (int i = 0; i < 100; ++i)
    {
        if (i % 5 == 0)
        {
            std::cout << i << "\n";
        }
    }

    // Generate a random number between 1 and 10.
    srand(time(0));
    int random = (rand() % 10) + 1;
}