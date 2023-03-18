#include <iostream>
#include "custommath.h"

int main(int argc, char *argv[]) {
    // define the default parameters a, b
    int a = 2;
    int b = 3;

    // take the parameters from command-line if provided
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
    // show the parameters to the user
    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;

    // using provided matrix function in 'cgcustommath' library and take the resulting array
    Eigen::Array22f result = matrix(a, b);

    // show the result to the user
    std::cout << "result: " << std::endl << result << std::endl;

    return 0;
}
