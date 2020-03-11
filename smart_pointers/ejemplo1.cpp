#include <iostream>

using namespace std;

void my_func()
{
    int* valuePtr = new int(15);
    int x = 45;
    if (x == 45) {
        //delete valuePtr;
        return;   // here we have a memory leak, valuePtr is not deleted
    }
    delete valuePtr;
}

int main()
{
  std::cout << "## Begin ##" << std::endl;
  my_func();
  std::cout << "## End ##" << std::endl;
  return 0;
}
