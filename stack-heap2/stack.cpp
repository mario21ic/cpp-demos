#include <iostream>

int hello() {
    int a = 100;
    std::cout << "&a: " << &a << std::endl;
    return a;
}

int main() {
    int a;
    std::cout << "&a: " << &a << std::endl;

    int b = -3;
    std::cout << "&b: " << &b << std::endl;

    int c = 12345;
    std::cout << "&c: " << &c << std::endl;

    int *p = &b;
    std::cout << "p -> &b: " << p << std::endl;
    std::cout << "&p: " << &p << std::endl;

    int d = hello();
    std::cout << "&d: " << &d << std::endl;

    return 0;
}
