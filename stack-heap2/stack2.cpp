#include <iostream>

class Cube
{
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
        return 1.0;
    }
    double getSurfaceArea(){
        return 1.5;
    }
};


Cube *CreateCube() {
    //Cube c(20);
    //return &c;
    Cube *c = new Cube(20);
    return c;
}


int main() {
    Cube *c = CreateCube();
    std::cout << "c: " << c << std::endl;
    std::cout << "&c: " << &c << std::endl;

    double r = c->getVolume();
    std::cout << "r: " << r << std::endl;
    std::cout << "&r: " << &r << std::endl;

    double v = c->getSurfaceArea();
    std::cout << "v: " << v << std::endl;
    std::cout << "&v: " << &v << std::endl;

    return 0;
}
