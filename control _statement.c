#include <stdio.h>

int main()
{
    int a;
    const int g1=15;
    const int g2=30;
    
    printf("Choose 0 for maths; 1 for science; 2 for both\n");
    scanf("%d",&a);
    if (a==0||a==1)
    {
        printf("gift is Rs%d",g1);
    }
    else if (a==2)
    {
        printf("gift is Rs%d",g2);
    }
    else{
        printf("enter correct value");
    }
    

    return 0;
}
