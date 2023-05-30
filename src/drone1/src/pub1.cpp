#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

struct Dados{

    Dados(){

        this-> x = 0.5f;
        this-> y = 2.5f;
        this-> z = 9.6f;

    }

    float x;
    float y;
    float z;

};

int main(int argc, char **argv){

    Dados dado;

    ros::init(argc, argv, "pub1");
    ros::NodeHandle n;

    ros::Publisher UAV_pub = n.advertise<std_msgs::String>("pos_drone1", 100);
    ros::Rate loop_rate(1);

    int cont = 0;
    while(ros::ok()){

        std_msgs::String msg;

        std::stringstream ss;

        if(dado.x < 100.0 || dado.y < 100.0 || dado.z < 100.0){

            ss << dado.x << ", " << dado.y << ", " << dado.z << " " + cont;

            msg.data = ss.str();

            ROS_INFO("%s", msg.data.c_str());

            UAV_pub.publish(msg);

            ros::spinOnce();

            loop_rate.sleep();

            dado.x = dado.x + 1;
            dado.y = dado.y + 1;
            dado.z = dado.z + 1;

        }else{

            dado.x = 0.5f;
            dado.y = 2.5f;
            dado.z = 9.6f;

            ss << dado.x << ", " << dado.y << ", " << dado.z << " " + cont;

            msg.data = ss.str();

            ROS_INFO("%s", msg.data.c_str());

            UAV_pub.publish(msg);

            ros::spinOnce();

            loop_rate.sleep();

            ++cont;

        }

    }

    return 0;

}
