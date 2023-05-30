cmake_minimum_required(VERSION 3.0.2)

project(drone2)

## Find catkin macros and libraries
find_package(
  catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

##Declaração catkin_package
catkin_package()

##build do diretorio
include_directories(${catkin_INCLUDE_DIRS})

##Build Publishers e Subscibers
add_executable(sub2_d1 src/sub2_d1.cpp)
target_link_libraries(sub2_d1 ${catkin_LIBRARIES})

add_executable(pub2 src/pub2.cpp)
target_link_libraries(pub2 ${catkin_LIBRARIES})

add_executable(sub2_d3 src/sub2_d3.cpp)
target_link_libraries(sub2_d3 ${catkin_LIBRARIES})
