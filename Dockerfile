#
# philly-phleet/phleet-build-container
# Provides an entrypoint for ROS developer tools
# Alex Wroblewski
#

# Create image from ROS Kinetic
from ros:kinetic

# Make a working directory
CMD ["mkdir", "workdir"]