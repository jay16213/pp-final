#include <opencv2/opencv.hpp>
using namespace cv;

int readImage(char *filename, unsigned char **r, unsigned char **g, unsigned char **b, int *width, int *height)
{
    Mat image;
    int image_size;

    image = imread(filename, IMREAD_COLOR);

    if(!image.data)
    {
        printf("No image data\n");
        return -1;
    }

    *width = image.cols;
    *height = image.rows;
    image_size = image.cols * image.rows;

    printf("Read image width:  %d\n", image.cols);
    printf("Read image height: %d\n", image.rows);

    *r = (unsigned char *) malloc(image_size * sizeof(unsigned char));
    *g = (unsigned char *) malloc(image_size * sizeof(unsigned char));
    *b = (unsigned char *) malloc(image_size * sizeof(unsigned char));

    for(int i = 0; i < image.rows; i++)
    {
        for(int j = 0; j < image.cols; j++)
        {
            // OpenCV is BGR
            (*b)[i*image.cols + j] = image.at<Vec3b>(i,j)[0];
            (*g)[i*image.cols + j] = image.at<Vec3b>(i,j)[1];
            (*r)[i*image.cols + j] = image.at<Vec3b>(i,j)[2];
        }
    }

    printf("Read %s done.\n", filename);
    return 0;
}

void freeImage(unsigned char **r, unsigned char **g, unsigned char **b)
{
    free(*r);
    free(*g);
    free(*b);
    return;
}
