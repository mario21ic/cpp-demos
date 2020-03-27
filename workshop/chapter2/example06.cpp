#include <iostream>

using namespace std;

int main()
{
    std::cout << "Loop Starting ...\n";
    // init condition increment
    for (int count = 1; count <= 5; ++count)
    {
        std::cout << "\n" << count;
        if (count == 2)
        break;
    }
    std::cout << "\n\nLoop fnished.";
    
    return 0;
} 
