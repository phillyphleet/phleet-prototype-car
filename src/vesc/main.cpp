/**
 * main.cpp
 * VESC Node on UART Link
 * Alex Wroblewski
 * Philly Phleet Senior Design Project
 **/

/**
 * Include Files
 **/
#include "ros/ros.h"


bool parseVESCCommand();

/**
 * main(argc, argv)
 */
int main(int argc, char **argv) {

  ros::init(argc, argv, "vesc_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("vesc", add);
  ROS_INFO("Ready to add two ints.");
  ros::spin();

  return 0;

}

/**
 * parseVESCCommand
 */
bool parseVESCCommand(){

}

// bool add(beginner_tutorials::AddTwoInts::Request  &req,
//          beginner_tutorials::AddTwoInts::Response &res)
// {
//   res.sum = req.a + req.b;
//   ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
//   ROS_INFO("sending back response: [%ld]", (long int)res.sum);
//   return true;
// }