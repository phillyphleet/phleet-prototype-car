#
# Makefile for phleet-prototype-car
# Alex Wroblewski
#

# Get the current directory that we are in
#
current_dir ?= $(shell pwd)


# Default Target
# 
all:
	ros_run

ros_build:
	# Build a container called phleet-build-container with the dockerfile in this directory
	#
	docker build -t philly-phleet/phleet-core:latest .

lidar_build:
	# Build a container for the RPlidar Node
	#

ros_run:
	echo "Starting Phleet Core"
	docker run -it \
			--mount type=bind,source=$(current_dir),target=/workdir \
			philly-phleet/phleet-core:latest \
			/bin/bash 
	if [[ "$OSTYPE" == "linux-gnu" ]]; then
		docker run -it \
			--mount type=bind,source=$(current_dir),target=/workdir \
			philly-phleet/lidar:latest \
			/bin/bash
	else 
		# Otherwise, do not pass in the LIDAR node
	fi

# Clean Target
clean:
	echo "Cleaning workspace"
	
