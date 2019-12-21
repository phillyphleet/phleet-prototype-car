#
# BUILD Dockerfile for RPLidar node 
#
#

# Based off ROS
FROM ros

WORKDIR /catkin_ws/src


# Load the build script into the container
ADD ./build.sh /root/build.sh

# Run the build script in the container
RUN /root/build.sh