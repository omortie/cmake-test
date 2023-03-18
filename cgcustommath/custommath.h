//
// Created by Mortie on 3/18/2023.
//

#ifndef CMAKE_TEST_CUSTOMMATH_H
#define CMAKE_TEST_CUSTOMMATH_H

#include <vector>

#if defined(CGCUSTOMMATH_LIBRARY)
#  define DESIGNERLIBS_EXPORT __declspec(dllexport)
#else
#  define DESIGNERLIBS_EXPORT __declspec(dllimport)
#endif

std::vector<int> DESIGNERLIBS_EXPORT matrix(int, int);

#endif //CMAKE_TEST_CUSTOMMATH_H
