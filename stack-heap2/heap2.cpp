#include <iostream>

using namespace std;

class Cube
{
//int with = 20;

public:
    int myWidth;
    Cube(int width=20)
    {
        std::cout << "++ Constructor Called\n";
        myWidth = width;
        std::cout << "myWidth: " << myWidth << std::endl;
        std::cout << "&myWidth: " << &myWidth << std::endl;
    }
    double getVolume(){
        return myWidth;
    }
};

Cube *CreateCubeOnHeap() {
    Cube *c = new Cube(20);
    return c;
}

int main() {
    Cube * cube = CreateCubeOnHeap();
    double v = cube->getVolume();

    // to avoid memory leaks
    delete cube;
    cube = nullptr;

    return 0;
}
