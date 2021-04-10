// Accessibility example.
#include <iostream>
#include <string>

class MyClass
{
public:
    MyClass(int myparam=0)
    {
        std::cout << "++ Constructor Called\n";
        std::cout << "myparam: " << myparam << std::endl;
        myPublicInt = 5;
    }
    ~MyClass()
    {
        std::cout << "-- Destructor Called\n";
    }
    int myPublicInt = 0;
protected:
    int myProtectedInt = 0;
private:
    int myPrivateInt = 0;
};

int main()
{
    std::cout << "### Application started\n";
    MyClass testClass;
    std::cout << "myPublicInt: " << testClass.myPublicInt << "\n";
    // std::cout << testClass.myProtectedInt << "\n";
    // std::cout << testClass.myPrivateInt << "\n";

    MyClass testClass2(2);
    testClass2.myPublicInt = 3;
    std::cout << "myPublicInt: " << testClass2.myPublicInt << "\n";

    std::cout << "### Application finished\n";
}