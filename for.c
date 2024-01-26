#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i, j; i < 3, j < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
