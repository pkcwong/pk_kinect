cmake_minimum_required(VERSION 3.8)
project(pk_kinect)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} ./lib/inc)
set(SOURCE_FILES lib/src/pk_kinect.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/sample/bin")

add_executable(imshow.out ./sample/imshow.cpp ${SOURCE_FILES})
target_link_libraries(imshow.out ${OpenCV_LIBS})
