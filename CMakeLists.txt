cmake_minimum_required(VERSION 3.0)
project(ColonyAutomata)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED COMPONENTS system window graphics)
include_directories(${SFML_INCLUDE_DIR} include)
file(GLOB SOURCES "src/*.cpp")
add_executable(ColonyAutomata ${SOURCES})
target_link_libraries(ColonyAutomata ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})