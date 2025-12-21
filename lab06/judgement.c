#include <stdio.h>

int max_array(int* array, int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

int min_array(int* array, int n)
{
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int sum_array(int* array, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    return sum;
}

int main()
{
    int grades[10];
    for(int i = 0; i < 10; i++)
    {
        int current_number;
        scanf("%d", &current_number);
        grades[i] = current_number;
    }

    int sum = sum_array(grades, 10);
    printf("Sum: %d\n", sum);

    int min = min_array(grades, 10);
    printf("Min: %d\n", min);

    int max = max_array(grades, 10);
    printf("Max: %d\n", max);

    double average = (sum - max - min) / 8.0;
    printf("Average: %.2lf\n", average);

    return 0;
}