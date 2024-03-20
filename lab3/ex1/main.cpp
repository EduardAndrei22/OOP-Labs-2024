#include "Math.h"
#include <iostream>

int main() {
    std::cout << "Add(1, 2) = " << Math::Add(1, 2) << std::endl;
    std::cout << "Add(1, 2, 3) = " << Math::Add(1, 2, 3) << std::endl;
    std::cout << "Add(1.5, 2.5) = " << Math::Add(1.5, 2.5) << std::endl;
    std::cout << "Add(1.5, 2.5, 3.5) = " << Math::Add(1.5, 2.5, 3.5) << std::endl;
    std::cout << "Mul(2, 3) = " << Math::Mul(2, 3) << std::endl;
    std::cout << "Mul(2, 3, 4) = " << Math::Mul(2, 3, 4) << std::endl;
    std::cout << "Mul(2.5, 3.5) = " << Math::Mul(2.5, 3.5) << std::endl;
    std::cout << "Mul(2.5, 3.5, 4.5) = " << Math::Mul(2.5, 3.5, 4.5) << std::endl;

    std::cout << "Add(5, 3, 2, 1) = " << Math::Add(4, 5, 3, 2, 1) << std::endl;

    char* concatenated = Math::Add("Hello", " World!");
    if (concatenated != nullptr) {
        std::cout << "Concatenated string: " << concatenated << std::endl;
        delete[] concatenated;
    }
    else {
        std::cout << "One or both strings were nullptr." << std::endl;
    }

    return 0;
}