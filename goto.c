#include <stdio.h>

// label: //got to loop trap
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;

// label: //go to misprinting error of hello world
//     printf("we are inside label");
//     goto end;
// printf("Hello World\n");
// goto label;
// end:
//     printf("we are at end");


int main()
{
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 5; j++)
        {
            printf("\n%d: enter number or enter 0 to exit: ", j);
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    printf("tataaa end");

    return 0;
}
