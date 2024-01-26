#include <stdio.h>

//slower than recursion
int fib_r(int i)
{
    if (i == 0)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    else
    {
        return fib_r(i - 1) + fib_r(i - 2);
    }
}

// faster than recursion
int fib_i(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int a = 0, b = 1, c;
        for (int i = 0; i < n - 1; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main()
{
    int num;
    printf("Enter value for fibonacci: ");
    scanf("%d", &num);
    
    //printf("%d fibonacci value is %d\n", num, fib_r(num)); //recursion slower one
    
    printf("%d fibonacci value is %d\n", num, fib_i(num)); //iteration faster one
    return 0;
}