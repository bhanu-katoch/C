#include <stdio.h>
#include "temp.c"

#define pi 3.14
#define SQUARE(r) r*r //macro
int main()
{
    int r;
    r=3;
    printf("%d\n",sum(4,5));
    printf("the area of circle %f\n",pi*SQUARE(r));
    return 0;
}