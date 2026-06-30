cmake_minimum_required(VERSION 3.20)

project(PizzaDecorator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(PizzaDecorator

    main.cpp

    pizza/FarmHouse.cpp
    pizza/Margherita.cpp
    pizza/VegDelight.cpp

    toppings/ExtraCheese.cpp
    toppings/Mushroom.cpp
)