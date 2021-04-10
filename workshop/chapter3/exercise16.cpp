// Vector example.
#include <iostream>
#include <string>
#include <vector>

// std::vector < int > myVector;
std::vector<int> myVector {1, 2, 3, 4, 5};

void PrintVector()
{
    // myVector.push_back(6);
    // myVector.pop_back();
    // myVector.push_back(8);
    std::cout << "Ready" << std::endl;
    
    for (int i = 0; i < myVector.size(); ++i)
    {
        std::cout << myVector[i] << std::endl;
    }
    std::cout << "\n\n";
}

int main()
{
    PrintVector();
}
