cmake_minimum_required(VERSION 2.8)

    set(CMAKE_C_FLAGS "-DTHREADED -g -Wall")
    add_library(sha512 sha512.c)
    target_link_libraries(sha512 gcrypt)
    
    add_executable(test sha512.c test.c)
    target_link_libraries(test gcrypt)
