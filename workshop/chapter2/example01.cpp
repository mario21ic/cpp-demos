using namespace std;

#include <iostream>
#include <vector>

int main()
{
    int myVector[] {0, 1, 2, 3, 4};
    
    for (int i = 0; i < myVector.size(); ++i)
    {
        int currentValue = myVector[i];
        std::cout << "\n" << currentValue;
    }
}
