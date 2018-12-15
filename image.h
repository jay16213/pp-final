#ifndef __IMAGE_H__
#define __IMAGE_H__

int readImage(char *filename, unsigned char **r, unsigned char **g, unsigned char **b, int *width, int *height);
void freeImage(unsigned char **r, unsigned char **g, unsigned char **b);

#endif
