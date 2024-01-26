#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20],str2[20];
    char str3[]=" is a friend of ";
    char str4[100];
    printf("enter 1st person name : ");
    gets(str1);
    printf("enter 2nd person name : ");
    gets(str2);
    puts(strcat(strcpy(str4,strcat(str1,str3)),str2));
    return 0;
}