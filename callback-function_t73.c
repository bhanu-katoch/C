#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int a, int b,int (*fptr)(int, int)){
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n",fptr(a,b));
    
}

void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    greetHelloAndExecute(5,4,ptr);
    return 0;
}
