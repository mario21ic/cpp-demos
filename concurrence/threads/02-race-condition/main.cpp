#include <iostream>
#include <thread>
#include <vector>

int z = 0;

void t_print(int x, int y) {
    //int z = 0;
    for (int i=x; i < y; ++i) {
      z = z+i;
      /*
      if ( z == 10 ) {
        continue;
      }
      */
      std::cout << "i: " << i << " - z: " << z << std::endl;
    }
}

int main() {
    std::cout << "Starting main" << std::endl;

    // This thread is launched by using 
    // function pointer as callable
    std::thread th1(t_print, 0, 2);
    // th1.join(); // commented
    std::thread th2(t_print, 2, 4);
    std::thread th3(t_print, 4, 6);
    std::thread th4(t_print, 6, 8);
    std::thread th5(t_print, 8, 10);

    //std::cout << "waiting" << std::endl;
    // Wait for the threads to finish
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();

    std::cout << "finished" << std::endl;
    return 0;
}
