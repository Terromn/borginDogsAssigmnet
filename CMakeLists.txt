cmake_minimum_required(VERSION 3.29)
project(boringDogsAssigment)

set(CMAKE_CXX_STANDARD 20)

add_executable(boringDogsAssigment main.cpp
        Pet/Pet.h
        Pet/Pet.cpp
        Dog/Dog.cpp
        Dog/Dog.h
        Cat/Cat.cpp
        Cat/Cat.h
        HotelRoom/HotelRoom.cpp
        HotelRoom/HotelRoom.h
        PetHotelManager/PetHotelManager.cpp
        PetHotelManager/PetHotelManager.h)
