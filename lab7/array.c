#include <stdio.h>
#include <stdlib.h>

void print_array(int* array, int N)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void print_average(int* array, int N)
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    double average = sum / (double)N;
    printf("Average: %.2lf\n", average);
}

int main()
{
    //printf("Enter array size: ");
    int N;
    scanf("%d", &N);

    int* array = malloc(N * sizeof(int));
    for(int i = 0; i < N; i++)
    {
        //printf("Enter number for position %d: ", i);
        int number;
        scanf("%d", &number);
        array[i] = number;
    }

    print_array(array, N);

    print_average(array, N);

    free(array);

    return 0;
}