#include <stdio.h>
int main()
{
    int a;
    printf("Enter number of which table you want\n");
    scanf("%d", &a);
    printf("\nTable of %d is :\n", a);
    int i = 1;
    for (; i < 11; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    return 0;
}
