#
# BUILD Dockerfile for RPLidar node 
# Alex Wroblewski
#

# Based off ROS
#
FROM ros

# Work out of catkin_ws
#
WORKDIR /catkin_ws

# Load the build script into the container
#
ADD ./build.sh /root/build.sh

# Run the build script in the container
#
RUN /root/build.sh