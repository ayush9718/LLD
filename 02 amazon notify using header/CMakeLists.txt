cmake_minimum_required(VERSION 3.10)

project(AmazonNotify)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    AmazonNotify

    main.cpp

    observable/iphoneObservable.cpp

    observer/mobileAlertObserver.cpp
    observer/emailAlertObserver.cpp
)


# Method 3: Automatically include all .cpp files

# For small projects:

# file(GLOB_RECURSE SOURCES "*.cpp")

# add_executable(AmazonNotify ${SOURCES})

