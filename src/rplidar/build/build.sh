#!/bin/bash

echo "Running GIT Clone"
mkdir src
catkin_make
cd src
git clone https://github.com/Slamtec/rplidar_ros.git
cd ..
source catkin_ws/catkin
