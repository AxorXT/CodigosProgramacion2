cmake_minimum_required(VERSION 3.24)
project(Polimorfismo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Polimorfismo main.cpp Polimorfismo.cpp Polimorfismo.h ../Persona.h Persona.cpp Persona.h)
