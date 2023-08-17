cmake_minimum_required(VERSION 3.20)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project main.cpp Person.cpp Person.h Manager.cpp Manager.h Employee.cpp Employee.h Instructor.cpp Instructor.h Student.cpp Student.h University.cpp University.h Faculty.cpp Faculty.h Department.cpp Department.h Course.cpp Course.h)
