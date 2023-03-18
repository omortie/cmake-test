#include <iostream>
#include "custommath.h"

int main(int argc, char *argv[]) {
    int a = 2;
    int b = 3;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            switch (i) {
                case 1:
                    a = std::stoi(argv[i]);
                    break;
                case 2:
                    b = std::stoi(argv[i]);
                    break;
                default:
                    break;
            }
        }

        std::cout << "received parameters are:" << std::endl;
    } else {
        std::cout << "using default parameters:" << std::endl;
    }
    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;

    Eigen::Array22f result = matrix(a, b);

    std::cout << "result: " << std::endl << result << std::endl;

    return 0;
}
