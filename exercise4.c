/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
#include <stdio.h>
void star(int n)
{
    printf("\n");
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}

void star_r(int n)
{
    printf("\n");
    for (int i = n; i > -1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}

int main()
{
    int num, size;
    printf("Enter size parametre for triangle ");
    scanf("%d", &size);
    printf("Enter 0 for triangluar pattern and 1 for reverse triangular pattern ");
    scanf("%d", &num);
    if (num == 0)
    {
        star(size);
    }
    else if (num == 1)
    {
        star_r(size);
    }
    else
    {
        printf("enter correct value\n");
    }
    return 0;
}