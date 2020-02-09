# Build

Build dockerfile for repo


`docker build -t phleet-build .`

The following command mounts the source of the repository for building

```
docker run -d \
  -it \
  --name dev \
  --mount type=bind,source="$(pwd)"/..,target=/work \
  phleet-build:latest /bin/bash
```