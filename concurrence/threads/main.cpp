#include <iostream>
#include <thread>
using namespace std;

void foo(){
    std::cout << "Hello thread!";
}

std::thread t(foo);
