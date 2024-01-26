#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i = 1;
    printf("enter number ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i += 1;
    } while (i <= num);

    return 0;
}
