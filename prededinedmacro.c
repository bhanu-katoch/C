#include <stdio.h>
int main()
{
    printf(__DATE__);
    printf("\n%d\n", __STDC__);
    printf( "%d\n",__LINE__);
    printf(__FILE__);
    printf("\n");
    printf(__TIME__);
    printf("\n");
    return 0;
}