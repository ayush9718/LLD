cmake_minimum_required(VERSION 3.20)

project(PaymentStrategy)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    PaymentStrategy

    main.cpp
    CreditCardPayment.cpp
    PaymentFactory.cpp
    UpiPayment.cpp     
)