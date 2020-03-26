#include<iostream>

using namespace std;

class MyClass {
    public:
        int var1; // Accessible to the class, everything that can see MyClass.
        int printPrivateVars(void);
        // int printPrivateVars(void) {
        //     setVar3();
        //     std::cout << "var3: " << var3 << std::endl;
        //     return 0;
        // }
    protected:
        int var2; // Accessible to the class, and any child classes.
    private:
        int var3; // Accessible to the class only.
        void setVar3(void);
        // void setVar3(void) {
        //     var3 = 13;
        // }
};
int MyClass::printPrivateVars() {
    this->setVar3();
    std::cout << "var3: " << this->var3 << std::endl;
    return 0;
}
void MyClass::setVar3(void) {
    this->var3 = 13;
}

class Car: MyClass {
    public:
      string model = "Mustang";
      void printVars(void) {
          this->var2 = 22;
          std::cout << "var2: " << this->var2 << std::endl;
          std::cout << "model: " << this->model << std::endl;
      }
};


int main() {
    std::cout << "## Start ##" << std::endl;
    MyClass myclass;
    
    std::cout << "printPrivateVars" << std::endl;
    myclass.printPrivateVars();

    std::cout << "## Inheritance ##" << std::endl;
    Car mycar;
    std::cout << "printVars" << std::endl;
    mycar.printVars();

    return 0;
}