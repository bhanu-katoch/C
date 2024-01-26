#include <stdio.h>

int myfunc(int a, int b)
{
    // auto int myVar;
    extern int sum;
    sum = a + b;
    return sum;
}
int sum;
int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    myfunc(4, 5);
    printf("The sum is %d\n", sum);

    return 0;
}