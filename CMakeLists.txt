cmake_minimum_required(VERSION 3.19)
project(ProjectPortfolio)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set(SOURCE_FILES
        main.cpp
        include/Card.cpp
        include/Hand.cpp)

set(HEADER_FILES
        include/Hand.h
        include/Card.h
        include/GenericPlayer.h
        include/Player.h)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

#[[
target_include_directories(${PROJECT_NAME}
                             PUBLIC ${HEADER_FILES}
                             ${SOURCE_FILES})]]
