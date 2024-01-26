#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // //program 1
    // char str[] = {'h', 'a', 'r', 'r', 'y','\0'};
    // printStr(str);

    // //program 2
    // char str[5] = "harry";
    // printStr(str);

    //program 3
    char str[34];
    gets(str);
    printf("\nUsing custom function printStr : ");
    printStr(str);
    printf("Using printf : %s\n", str);
    printf("using puts: ");
    puts(str);
    
    return 0;
}