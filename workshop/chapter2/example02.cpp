using namespace std;

#include <iostream>
#include <vector>

int main()
{
    int myVector[] {0, 1, 2, 3, 4};
    for (int currentValue : myVector)
    {
        std::cout << "\n" << currentValue;
    }

}
