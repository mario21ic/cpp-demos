#include <iostream>

using namespace std;

int main() {
    /*
    int number1;
    if (number1 == 0)
    {
        std::cout << "number1 is zero" << std::endl;
    }
    */

    // allocate memory of int size to an int pointer
    int* ptr1 = (int*) malloc(sizeof(int));
    // assign the value 5 to allocated memory
    *ptr1 = 5;
    std::cout << "ptr1: " << ptr1 << std::endl;
    std::cout << "*ptr1: " << *ptr1 << std::endl;
    std::cout << "&ptr1: " << &ptr1 << std::endl;

    // allocate memory of int size to an int pointer
    int* ptr2 = (int*) malloc(sizeof(int));
    // assign the value 5 to allocated memory
    *ptr2 = 5;
    std::cout << "ptr2: " << ptr2 << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;
    std::cout << "&ptr2: " << &ptr2 << std::endl;


    // allocate 5 int memory blocks
    int* ptr3 = (int*) malloc(5 * sizeof(int));
    std::cout << "ptr3: " << ptr3 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;
    std::cout << "&ptr3: " << &ptr3 << std::endl;

    // check if memory has been allocated successfully
    if (!ptr3) {
        cout << "Memory Allocation Failed";
        exit(1);
    }
    cout << "Initializing values..." << endl;
    for (int i = 0; i < 5; i++) {
        ptr3[i] = i * 2 + 1;
    }

    cout << "Initialized values" << endl;
    // print the values in allocated memories
    for (int i = 0; i < 5; i++) {
        // ptr[i] and *(ptr+i) can be used interchangeably
        std::cout << "*(ptr3 + i): " << *(ptr3 + i) << std::endl;
    }
    std::cout << "ptr3: " << ptr3 << std::endl;
    std::cout << "*ptr3: " << *ptr3 << std::endl;
    std::cout << "&ptr3: " << &ptr3 << std::endl;

    // deallocate memory
    free(ptr3);
    ptr3 = nullptr;

    // allocate memory of int size to an int pointer
    int* ptr4 = (int*) malloc(sizeof(int));
    // assign the value 5 to allocated memory
    *ptr2 = 4;
    std::cout << "ptr4: " << ptr4 << std::endl;
    std::cout << "*ptr4: " << *ptr4 << std::endl;
    std::cout << "&ptr4: " << &ptr4 << std::endl;

    return 0;
}
