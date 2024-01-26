#include <stdio.h>
int main()
{
    int m1, n1, m2, n2;
    int a[10][10];
    int b[10][10];
    printf("enter no. of rows of matrix a : ");
    scanf("%d", &m1);
    printf("enter no. of columns of matrix a : ");
    scanf("%d", &n1);
    printf("enter no. of rows of matrix b : ");
    scanf("%d", &m2);
    printf("enter no. of columns of matrix b : ");
    scanf("%d", &n2);
    printf("\nfor matrix b:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("enter value %d%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nfor matrix b:\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("enter value %d%d : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nmatrix A:\n");
    printf("\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix B:\n");
    printf("\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if (n1 == m2)
    {
        printf("\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)

            {
                int sum = 0;
                for (int k = 0; k < n1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("matrix multipication not possible");
    }

    return 0;
}