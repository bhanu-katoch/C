#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[640]; //= " \nThis content was produced by Tutorial64.c";

    //****** Reading a file ******
    ptr = fopen("myfile.txt", "r");// it can't read spaces
    fscanf(ptr, "%s", string);
    printf("The content of this file has %s\n",string );// 3 arguments

    // // ****** Writing a file ******
    // ptr = fopen("myfile.txt", "a");
    // fprintf(ptr, "%s", string); // 3 arguments

    fclose(ptr);
    return 0;
}
