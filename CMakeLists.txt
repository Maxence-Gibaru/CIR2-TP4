cmake_minimum_required(VERSION 3.26)
project(CIR2_TP4)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(CIR2_TP4
        main.cpp
        src/test.cpp
        include/Circle.h
        include/Shape.h
        include/Point2D.h
        src/Point2D.cpp
        src/Shape.cpp
        src/Circle.cpp
        include/Vector.h
        src/Vector.cpp
)
