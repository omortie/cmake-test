add_executable(mat main.cpp)
# link our mat executable to the interface library
# all included directories will be available to mat
target_link_libraries(mat cgcustommath)
