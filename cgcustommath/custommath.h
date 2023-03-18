//
// Created by Mortie on 3/18/2023.
//

#ifndef CMAKE_TEST_CUSTOMMATH_H
#define CMAKE_TEST_CUSTOMMATH_H

#include "Eigen/Core"

#ifdef WIN32
// exporting symbols in windows-based machines for shared library
#if defined(CGCUSTOMMATH_LIBRARY)
#  define CGCUSTOMMATH_EXPORT __declspec(dllexport)
#else
#  define CGCUSTOMMATH_EXPORT __declspec(dllimport)
#endif
#else // for macOS
#  define CGCUSTOMMATH_EXPORT
#endif // MSVC

Eigen::Array22f CGCUSTOMMATH_EXPORT matrix(int, int);

#endif //CMAKE_TEST_CUSTOMMATH_H
