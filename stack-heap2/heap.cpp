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
        myWidth = 5;
        std::cout << "myWidth: " << myWidth << std::endl;
        std::cout << "&myWidth: " << &myWidth << std::endl;
    }
    int setLength(int myparam=0){
        std::cout << "myparam: " << myparam << std::endl;
        std::cout << "&myparam: " << &myparam << std::endl;
        return myparam;
    }
};

int main() {
    int *p = new int; // inicializa en 0 -> *p
    std::cout << "p: " << p << std::endl;
    std::cout << "*p: " << *p << std::endl;
    std::cout << "stack &p: " << &p << std::endl;

    int p2 = 2;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "stack &p2: " << &p2 << std::endl;

    Cube *c1 = new Cube();
    std::cout << "&c1: " << c1 << std::endl;

    Cube *c2 = c1;
    std::cout << "&c2: " << c2 << std::endl;

    c2->setLength(10);

    return 0;
}
