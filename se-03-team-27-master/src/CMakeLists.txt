#
# /src/CMakeLists.txt --
#

cmake_minimum_required(VERSION 3.1.0)

set(CMAKE_PREFIX_PATH $ENV{HOME}/Qt/5.14.1/gcc_64)
include_directories(${PROJECT_BINARY_DIR}/src)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)
qt5_add_resources(RESOURCES resource.qrc)

# Populate a CMake variable with the sources
set(Beergame_SRCS
    mainwindow.ui
    secdialog.ui
    playerdialog.ui
    resource.qrc
    order.cpp
    instructor.cpp
    game.cpp
    main.cpp
    mainwindow.cpp
    secdialog.cpp
    playerdialog.cpp
    player.cpp
)

# Tell CMake to create the helloworld executable
add_executable(beergame ${Beergame_SRCS} ${RESOURCES})

set_target_properties(beergame PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/)

# Use the Widgets module from Qt 5
target_link_libraries(beergame Qt5::Widgets)
