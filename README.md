# Parallel Programming Final Project

## Compile
### Compile image-example

```bash
mkdir build && cd build
cmake ..
make
```

To compile your own code, please modify CMakeLists.txt

## Functions

#### int readImage(char *filename, unsigned char **r, unsigned char **g, unsigned char **b, int *width, int *height)

- return -1 if read image error

- allocate the array of *r*, *g*, *b* inside the function. Also set the width and height of the image to *width* & *height*

#### void freeImage(unsigned char **r, unsigned char **g, unsigned char **b)
- free *r*, *g*, *b*
