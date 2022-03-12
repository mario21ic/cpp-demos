// Deleting a Dynamic Variable with delete[] instead of delete


#include <iostream>

using namespace std;


struct noisy
{
    noisy() { cout << "constructing noisy" << endl; }
    ~noisy() { cout << "destroying noisy" << endl; }
};

int main()
{
    noisy* p = new noisy;
    delete[] p;

    return 0;
}

