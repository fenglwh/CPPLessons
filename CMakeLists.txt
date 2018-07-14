cmake_minimum_required(VERSION 3.6)
project(Learning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Lessons.h CPPLessons/Lesson1_basic_type/Lesson1.h CPPLessons/Lesson1_basic_type/Lesson1.cpp CPPLessons/Lesson2_basic_type_convert/Lesson2.cpp CPPLessons/Lesson2_basic_type_convert/Lesson2.h CPPLessons/Lesson3_input_output/Lesson3.h CPPLessons/Lesson3_input_output/Lesson3.cpp)
add_executable(Learning ${SOURCE_FILES})