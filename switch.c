#include <stdio.h>
/*
we can enter single character only in switch
and wile inputing value also only first character matter
*/
int main(int argc, char const *argv[])
{
    char a;
    printf("enter b or g : ");
    scanf("%c", &a);
    switch (a)
    {
    case 'b':
        printf("boy");
        break;
    case 'g':
        printf("girl");
        break;

    default:
        break;
    }
    return 0;
}
