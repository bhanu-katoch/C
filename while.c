#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i = 1;
    printf("enter number ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i);
        i += 1;
    }

    return 0;
}
