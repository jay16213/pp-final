#include <cstdio>
#include "image.h"

int main(int argc, char **argv)
{
    unsigned char *r, *g, *b;
    int w, h;

    readImage(argv[1], &r, &g, &b, &w, &h);

    printf("%d %d %d\n", r[34], g[34], b[34]);

    freeImage(&r, &g, &b);
    return 0;
}
