#include <iostream>
#include <memory>

using namespace std;

void my_func()
{
    std::unique_ptr<int> valuePtr(new int(15));
    int x = 45;
    if (x == 45) {
        //delete valuePtr;
        return;   // no memory leak anymore
    }
    return;
}

int main()
{
  std::cout << "## Begin ##" << std::endl;
  my_func();
  std::cout << "## End ##" << std::endl;
  return 0;
}
