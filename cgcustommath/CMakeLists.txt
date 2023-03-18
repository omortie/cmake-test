# define shared library as an interface to work with eigen lib
add_library(cgcustommath SHARED custommath.cpp)
# link our library to the eigen so it would build the eigen as dependency
target_link_libraries(cgcustommath eigen)
# export internal include directory as interface for main executable
target_include_directories(cgcustommath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# define the flag for exporting symbols in windows in shared library
target_compile_definitions(cgcustommath PRIVATE CGCUSTOMMATH_LIBRARY)
