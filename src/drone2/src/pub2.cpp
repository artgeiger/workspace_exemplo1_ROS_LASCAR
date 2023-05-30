#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

struct Dados{

    Dados(){

        this-> x = 12.8f;
        this-> y = 15.3f;
        this-> z = 6.6f;

    }

    float x;
    float y;
    float z;

};

int main(int argc, char **argv){

    Dados dado;

    ros::init(argc, argv, "pub2");
    ros::NodeHandle n;

    ros::Publisher UAV_pub = n.advertise<std_msgs::String>("pos_drone2", 100);
    ros::Rate loop_rate(1);

    int cont = 0;
    while(ros::ok()){

        std_msgs::String msg;

        std::stringstream ss;

        if(dado.x < 100 || dado.y < 100 || dado.z < 100){


            ss << dado.x << ", " << dado.y << ", " << dado.z << " " + cont;

            msg.data = ss.str();

            ROS_INFO("%s", msg.data.c_str());

            UAV_pub.publish(msg);

            ros::spinOnce();

            loop_rate.sleep();

            ++cont;

            dado.x = dado.x + 1;
            dado.y = dado.y + 1;
            dado.z = dado.z + 1;

        }else{

            dado.x = 12.8f;
            dado.y = 15.3f;
            dado.z = 6.6f;

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
