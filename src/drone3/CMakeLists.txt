cmake_minimum_required(VERSION 3.0.2)

project(drone3)

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

##Build UAV1, UAV2, UAV3
add_executable(sub3_d1 src/sub3_d1.cpp)
target_link_libraries(sub3_d1 ${catkin_LIBRARIES})

add_executable(sub3_d2 src/sub3_d2.cpp)
target_link_libraries(sub3_d2 ${catkin_LIBRARIES})

add_executable(pub3 src/pub3.cpp)
target_link_libraries(pub3 ${catkin_LIBRARIES})
