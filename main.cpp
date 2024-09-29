#include <cstdlib>
#include <iostream>

#include "include/mult.hpp"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Provide 2 arguments" << std::endl;
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    std::cout << mult(a, b) << std::endl;

    return 0; 
}