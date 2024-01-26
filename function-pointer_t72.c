#include <stdio.h>
int AddNumber (int n1, int n2){
return n1+n2;
}
int main()
{
int (*fun) (int, int);
fun = AddNumber;
int res1 = fun(100, 20);
int res2 = AddNumber(20, 20);
printf("Using function pointer: %d",res1);
printf("\nUsing function name: %d\n",res2);
return 0;
}