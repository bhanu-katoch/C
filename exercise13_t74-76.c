#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// gcc exercise13_t74.c -lm // This tells the compiler to link against the math library.
float Edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y2 - y1), 2));
}
float Mdistance(int x1, int y1, int x2, int y2)
{
    return abs(x2 - x1) + abs(y2 - y1);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    return 3.14 * (pow(fptr(x1, y1, x2, y2), 2));
}
int main()
{
    // take x1, y1 and x2, y2 from the user using scanf
    int x1, x2, y1, y2;
    printf("\nenter x1: ");
    scanf("%d", &x1);
    printf("\nenter y1: ");
    scanf("%d", &y1);
    printf("\nenter x2: ");
    scanf("%d", &x2);
    printf("\nenter y2: ");
    scanf("%d", &y2);

    float (*eptr)(int, int, int, int);
    eptr = Edistance; /// keep the function data type in edistance nad mdistance same
    float (*mptr)(int, int, int, int);
    mptr = &Mdistance;

    printf("\narea of circle in eucledian : %f\n", areaOfCircle(x1, y1, x2, y2, eptr));
    printf("\narea of circle in manhattan : %f\n", areaOfCircle(x1, y1, x2, y2, mptr));
    //printf("%f",mptr(1,2,2,1)); //float value as function type is float

    return 0;
}