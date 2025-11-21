#include <stdio.h>

void printArray(int A[6][10])
{   
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

void print_transposed(int A[6][10])
{
    for(int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 6; i++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

void print_reverse(int A[6][10])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 9; j >= 0; j--)
        {
            printf("%d\t", A[i][j]);         
        }
        printf("\n");
    }
}

void print_snake(int A[6][10])
{
    for(int i = 0; i < 6; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < 10; j++)
            {
                printf("%d ", A[i][j]);
            }
        }
        else
        {
            for(int j = 9; j >= 0; j--)
            {
                printf("%d ", A[i][j]);
            }
        }
    }
}

int main()
{
    int A[6][10];
    // this table does not allow us to see the different array print forms
    // for(int i = 0; i < 6; i++)
    // {
    //     for(int j = 0; j < 10; j++)
    //     {
    //         A[i][j] = 5 * (5 - i) + j * (9 - j);
    //     }
    // }

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            A[i][j] = i + j;
        }
    }

    printArray(A);
    printf("\n");
    print_transposed(A);
    printf("\n");
    print_reverse(A);
    printf("\n");
    print_snake(A);
    printf("\n");
}