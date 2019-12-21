#
# Makefile for phleet-prototype-car
# Alex Wroblewski
#
current_dir ?= $(shell pwd)


# Default Target
# 
all:
	ros_run

ros_build:
	# Build a container called phleet-build-container with the dockerfile in this directory
	#
	docker build -t philly-phleet/phleet-build-container:latest .

ros_run:

	docker run -it \
	--mount type=bind,source=$(current_dir),target=/workdir \
	philly-phleet/phleet-build-container:latest \
	/bin/bash



# Steering Node
#
steering:

# Build the LIDAR Node
#
lidar:
	sudo chmod 666 /dev/ttyUSB0



# Clean Target
clean:
	echo "Cleaning workspace"
	
