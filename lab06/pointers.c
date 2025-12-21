#include <stdio.h>

void print_array(int* array, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    int a[8];
    int* pa;

    for (i = 0; i < 8; i++)
    {
        a[i] = i*i;
    }
    print_array(a, 8);

    pa = &a[0];
    a[6] = *(a+4);
    print_array(a, 8);
    *(pa+3) = a[5];
    print_array(a, 8);
    a[0] = *((pa++)+2);
    print_array(a, 8);
    *((++pa)+5) = a[1];
    print_array(a, 8);
    *(&a[5]-1) = *(--pa);
    print_array(a, 8);

    return 0;
}