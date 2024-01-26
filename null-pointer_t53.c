#include <stdio.h>

int main()
{
    int a = 34;
    int * ptr=NULL;
    
    //printf("%d",*ptr);

    if (ptr != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}