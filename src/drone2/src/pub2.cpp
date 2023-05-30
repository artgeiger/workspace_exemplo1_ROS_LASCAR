#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv){

    ros::init(argc, argv, "pub2");
    ros::NodeHandle n;

    ros::Publisher UAV_pub = n.advertise<std_msgs::String>("pos_drone2", 100);
    ros::Rate loop_rate(1);

    int cont = 0;
    while(ros::ok()){

        std_msgs::String msg;

        std::stringstream ss;

        ss <<"A posicão do drone 2 é de x = 12.8, y = 15.3 e z = 6.6 em metros" << cont;

        msg.data = ss.str();

        ROS_INFO("%s", msg.data.c_str());

        UAV_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();

        ++cont;

    }

    return 0;


}
