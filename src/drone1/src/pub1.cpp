#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv){

    ros::init(argc, argv, "pub1");
    ros::NodeHandle n;

    ros::Publisher UAV_pub = n.advertise<std_msgs::String>("pos_drone1", 100);
    ros::Rate loop_rate(1);

    int cont = 0;
    while(ros::ok()){

        std_msgs::String msg;

        std::stringstream ss;

        ss <<"A posicão do drone 1 é de x = 0.5, y = 2.5 e z = 9.6 em metros" << cont;

        msg.data = ss.str();

        ROS_INFO("%s", msg.data.c_str());

        UAV_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();

        ++cont;

    }

    return 0;


}
