#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 1; i < 6; i++)
    {
        printf("%d :Enter your age -", i);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     printf(" -->no\n");
        //     break;
        // }
        if (age > 10)
        {
            printf(" -->no\n");
            continue;
        }
        printf(" -->good\n");
        if (i == 5)
        {
            printf(" -->completed\n");
        }
    }
    return 0;
}
