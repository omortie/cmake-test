#include <iostream>
#include "custommath.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> result = matrix(2, 3);

    std::cout << result[0] * result[1];

    return 0;
}
