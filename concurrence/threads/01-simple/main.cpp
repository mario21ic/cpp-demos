#include <iostream>
#include <thread>
#include <vector>

void t_print_example()
{
    std::vector<std::thread> mythreads;
    for (int i = 0; i < 10; ++i) {
        // lambda capture by value i (no params)
        auto f = [i]()
        {
            std::cout << "i: " << i << std::endl;
        };
        std::thread t(f);
        mythreads.push_back(std::move(t));
    }
    // Wait for the threads to finish
    for (auto& t : mythreads) {
        t.join();
    }
}

int main() {
    std::cout << "Threading print example" << std::endl;
    t_print_example();
    return 0;
}
