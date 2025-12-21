#include <stdio.h>

void badf(int x, int y, int sum, int diff)
{
    sum = x + y;
    diff = x - y;
}

void goodf(int x, int y, int* sum, int* diff)
{
    *sum = x + y;
    *diff = x - y;
}

int main()
{
    int a, b, sum, diff;
    scanf("%d", &a);
    scanf("%d", &b);
    sum=0;
    diff=0;
    //badf(a, b, sum, diff);
    goodf(a, b, &sum, &diff);
    printf("Sum: %d\n", sum);
    printf("Diff: %d\n", diff);
    return 0;
}