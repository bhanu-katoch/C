#include <stdio.h>

void sum_sub(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d and value of b is %d\n", a, b);
    sum_sub(&a, &b);
    printf("The value of a is %d and value of b is %d\n", a, b);

    return 0;
}