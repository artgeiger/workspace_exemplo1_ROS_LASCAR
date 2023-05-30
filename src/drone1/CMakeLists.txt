cmake_minimum_required(VERSION 3.0.2)

project(drone1)

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

##Build Publishers e Subscribers
add_executable(pub1 src/pub1.cpp)
target_link_libraries(pub1 ${catkin_LIBRARIES})

add_executable(sub1_d2 src/sub1_d2.cpp)
target_link_libraries(sub1_d2 ${catkin_LIBRARIES})

add_executable(sub1_d3 src/sub1_d3.cpp)
target_link_libraries(sub1_d3 ${catkin_LIBRARIES})
