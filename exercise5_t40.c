#include <stdio.h>

void rev_arr(int *a, int l)
{
    int temp;
    for (int i = 0; i < (l / 2); i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + l - 1 - i);
        *(a + l - 1 - i) = temp;
    }
}

void print_arr(int a[], int l)
{
    printf("%c", '[');
    for (int i = 0; i < l; i++)
    {
        printf("%d%c ", a[i], ',');
    }
    printf("%c\n", ']');
}
int main()
{
    int arr[] = {2, 3, 5, 8, 76, 87};
    int a_l = sizeof(arr) / sizeof(arr[0]);
    printf("\noriginal array :\n");
    print_arr(arr, a_l);
    rev_arr(arr, a_l);
    printf("\nreversed array :\n");
    print_arr(arr, a_l);

    return 0;
}