#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

void t_print_example_with_mutex()
{
    std::vector<std::thread> mythreads;
    std::mutex print_mutex;
    int counter = 0;

    for (int i = 0; i < 10; ++i) {
        // lambda capture by value i (no params)
        auto f = [i, &counter, &print_mutex]()
        {
            // Lock by mutual exclution
            std::lock_guard<std::mutex> lock(print_mutex);
            std::cout << "counter: " << counter << std::endl;
            counter += 1;
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
    t_print_example_with_mutex();
    return 0;
}

