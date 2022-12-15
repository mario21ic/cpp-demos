#include <iostream>
#include <thread>
#include <vector>
#include <atomic>

void t_print_example_with_atomic()
{
    std::vector<std::thread> mythreads;
    std::atomic_int counter{0};

    for (int i = 0; i < 10; ++i) {
        // lambda capture by value i (no params)
        auto f = [i, &counter]()
        {
            counter += i;
            std::cout << "counter: " << counter << std::endl;
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
    t_print_example_with_atomic();
    return 0;
}

