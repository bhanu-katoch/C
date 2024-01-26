#include <stdio.h>

// with arg and with return value
int sum(int a, int b)
{
    return a + b;
}

// with arg and no return value
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// without arg and with return value
int takenumber()
{
    int i;
    printf("\nenter number ");
    scanf("%d", &i);
    return i;
}

// no arg and no return value
void hhash()
{
    printf("%c\n", '#');
}

int main()
{
    int a, b, c, n;
    a = 10;
    b = 20;
    n = 5;
    c = sum(a, b);
    printf("%d\n", c);
    star(n);
    printf("entered number is %d\n",takenumber());
    hhash();
    return 0;
}
