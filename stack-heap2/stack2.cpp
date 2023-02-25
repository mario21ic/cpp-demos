#include <iostream>
// Linux
#include <unistd.h>


using namespace std;




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
    // to avoid memory leaks
    //delete c;
    //c = nullptr;
    
    // Example of memory leaks
    int x;
    if(x == 0)
    {
        std::cout << "X is zero" << std::endl;
    }

    double r = c->getVolume();
    std::cout << "r: " << r << std::endl;
    std::cout << "&r: " << &r << std::endl;

    double v = c->getSurfaceArea();
    std::cout << "v: " << v << std::endl;
    std::cout << "&v: " << &v << std::endl;

    // 60 seconds
    /*
    std::cout << "sleep 60" << std::endl;
    sleep(60);
    std::cout << "bye" << std::endl;
    */

    return 0;
}
