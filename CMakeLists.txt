#
# CMakeLists.txt --
#

cmake_minimum_required(VERSION 3.1.0)
project(Beergame)

set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.14.1/gcc_64)
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)

add_subdirectory(docs)
add_subdirectory(src)
add_subdirectory(test)

enable_testing()
add_test(NAME misc COMMAND beergame-test V )
