cmake_minimum_required(VERSION 3.21)
project(p101_posix_examples_sys
        VERSION 0.0.1
        DESCRIPTION ""
        LANGUAGES C)

add_subdirectory(mman)
add_subdirectory(select)
add_subdirectory(socket)
add_subdirectory(stat)
add_subdirectory(statvfs)
add_subdirectory(times)
add_subdirectory(utsname)
add_subdirectory(wait)
