#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n;
    char a, b;

    for (int j = 0; j < 3; j++)
    {
        printf("%d:Enter the length of the id you want to create: ", j + 1);
        scanf("%d", &n);
        getchar();
        printf("enter value of a :"); // only a application of getchar()
        scanf("%c", &a);
        getchar();      // char take enter key and input which create hinderance.
        printf("enter value of b :"); // only a application of getchar()       
        scanf("%c", &b);

        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("\nEnter the employee ID no. %d: ", j + 1);
        scanf("%s", ptr);

        printf("The value of employee ID no.%d is %s: \n\n", j, ptr);

        free(ptr);
    }

    return 0;
}