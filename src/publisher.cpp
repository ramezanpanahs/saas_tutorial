#include <ros/ros.h>

int main(int argc, char** argv){

    ros::init(argc,argv,"publisher");
    ros::NodeHandle nh;
    ros::Rate rate(2); //Hz

    while (nh.ok()){
        ROS_INFO("hi Sam!");
        rate.sleep();
    }

    return 0;
}
