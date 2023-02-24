#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
stack: stores local variables
heap: dynamic memory for programmer to allocate
data: stores global variables, separated into initialized and uninitialized
text: stores the code being executed
*/

/*
Initialized aumenta 4 bytes
Unitialized aumenta 4 bytes
Stack aumenta 8 bytes
Heap aumenta 20 bytes
*/

// bin section .data: variable global inicializada
int a = 5;
int aa = 5;

// bin section .bss: variable global no inicializada, aumenta 4
int b;
int bb;

int main(){
    std::cout << "Initialized data addr a: " << &a << std::endl;
    std::cout << "Initialized data addr aa: " << &aa << std::endl;

    std::cout << "Unitialized data addr b: " << &b << std::endl;
    std::cout << "Unitialized data addr bb: " << &bb << std::endl;

    // en el stack: variable local
    int c=7;
    std::cout << "stack addr c: " << &c << std::endl;

    int cc=7;
    std::cout << "stack addr cc: " << &cc << std::endl;

    // en .bss: variable estática no inicializada, aumenta 4
    static int d;
    std::cout << "Unitialized addr d: " << &d << std::endl;
    // Esta 8 posiciones adelante del anterior

    // en el stack: ptr es un puntero local que apunta a memoria dinámica en el heap
    int *ptr = (int *) malloc(sizeof(int));
    std::cout << "stack addr prt: " << &ptr << std::endl;

    int *ptr2 = (int *) malloc(sizeof(int));
    std::cout << "stack addr prt2: " << &ptr2 << std::endl;

    float *ptr3 = (float *) malloc(sizeof(float));
    std::cout << "stack addr prt3: " << &ptr3 << std::endl;

    // en el heap
    ptr[0] = 3;
    std::cout << "heap addr prt: " << &ptr[0] << std::endl;

    ptr2[0] = 3;
    std::cout << "heap addr prt2: " << &ptr2[0] << std::endl;

    ptr3[0] = 3.0;
    std::cout << "heap addr prt3: " << &ptr3[0] << std::endl;

    free(ptr);
    free(ptr2);

    return 1;
}
