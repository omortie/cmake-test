//
// Created by Mortie on 3/18/2023.
//

#ifndef CMAKE_TEST_CUSTOMMATH_H
#define CMAKE_TEST_CUSTOMMATH_H

#include "Eigen/Core"

// exporting symbols in windows-based machines for shared library
#if defined(CGCUSTOMMATH_LIBRARY)
#  define DESIGNERLIBS_EXPORT __declspec(dllexport)
#else
#  define DESIGNERLIBS_EXPORT __declspec(dllimport)
#endif

Eigen::Array22f DESIGNERLIBS_EXPORT matrix(int, int);

#endif //CMAKE_TEST_CUSTOMMATH_H
