//
// Created by Mortie on 3/18/2023.
//

#include "custommath.h"

Eigen::Array22f matrix(int a, int b) {
    Eigen::Array22f resultArray = Eigen::Array22f::Zero();
    resultArray(0, 0) = 1;
    resultArray(1, 1) = 1;

    resultArray *= a;
    resultArray += b;

    return resultArray;
}