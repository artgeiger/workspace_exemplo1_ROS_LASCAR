#include "ros/ros.h"
#include "std_msgs/String.h"

void topicoCallback(const std_msgs::String::ConstPtr& msg)
{

  ROS_INFO("Drone1: [%s]", msg->data.c_str());

}

int main(int argc, char **argv)
{

    ros::init(argc, argv, "sub2_d1");
    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("pos_drone1", 100, topicoCallback);
    ros::spin();

    return 0;

}
