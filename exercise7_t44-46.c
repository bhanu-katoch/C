#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

typedef struct Driver{
    char name[50];
    char dlno[50];
    char route[50];
    int kms;
}dr;


int main()
{
    dr d1,d2,d3;
    printf("enter details of 3 drivers\n");

    printf("1-enter name of driver : ");
    scanf("%s",d1.name);
    printf("1-enter dlno of driver : ");
    scanf("%s",d1.dlno);
    printf("1-enter route of driver : ");
    scanf("%s",d1.route);
    printf("1-enter kms of driver : ");
    scanf("%d",&d1.kms);

    printf("2-enter name of driver : ");
    scanf("%s",d2.name);
    printf("2-enter dlno of driver : ");
    scanf("%s",d2.dlno);
    printf("2-enter route of driver : ");
    scanf("%s",d2.route);
    printf("2-enter kms of driver : ");
    scanf("%d",&d2.kms);
    
    printf("3-enter name of driver : ");
    scanf("%s",d3.name);
    printf("3-enter dlno of driver : ");
    scanf("%s",d3.dlno);
    printf("3-enter route of driver : ");
    scanf("%s",d3.route);
    printf("3-enter kms of driver : ");
    scanf("%d",&d3.kms);


    printf("***details of 3 drivers are*****\n");
    printf("1.\n");
    printf("1-name of driver is : %s.\n",d1.name);
    printf("1-dlno of driver : %s.\n",d1.dlno);   
    printf("1-route of driver : %s.\n",d1.route);
    printf("1-kms of driver : %d\n",d1.kms);
    printf("2.\n");
    printf("2-name of driver is : %s.\n",d2.name);
    printf("2-dlno of driver : %s.\n",d2.dlno);   
    printf("2-route of driver : %s.\n",d2.route);
    printf("2-kms of driver : %d\n",d2.kms);
    printf("3.\n");
    printf("3-name of driver is :%s.\n ",d3.name);
    printf("3-dlno of driver : %s.\n",d3.dlno);   
    printf("3-route of driver : %s.\n",d3.route);
    printf("3-kms of driver : %d\n",d3.kms);

    return 0;
}