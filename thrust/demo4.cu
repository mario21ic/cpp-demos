#include <iostream>
#include <thrust/binary_search.h>
#include <thrust/host_vector.h>
#include <thrust/execution_policy.h>

int main(void)
{
    thrust::host_vector<int> input(5);

    input[0] = 0;
    input[1] = 2;
    input[2] = 5;
    input[3] = 7;
    input[4] = 8;

    std::cout << thrust::binary_search(thrust::host, input.begin(), input.end(), 0); // returns true
    std::cout << thrust::binary_search(thrust::host, input.begin(), input.end(), 1); // returns false
    std::cout << thrust::binary_search(thrust::host, input.begin(), input.end(), 2); // returns true
    std::cout << std::endl;
    /*
    thrust::binary_search(thrust::host, input.begin(), input.end(), 3); // returns false
    thrust::binary_search(thrust::host, input.begin(), input.end(), 8); // returns true
    thrust::binary_search(thrust::host, input.begin(), input.end(), 9); // returns false
    */

    return 0;
}
