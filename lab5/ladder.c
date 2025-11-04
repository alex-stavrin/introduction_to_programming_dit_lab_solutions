#include <stdio.h>

unsigned long long ladder(int number_of_steps)
{
    // if(number_of_steps == 0) return 0;
    // if(number_of_steps == 1) return 1;
    // if(number_of_steps == 2) return 2;
    if(number_of_steps <= 2) return number_of_steps;
    if(number_of_steps == 3) return 4;

    return ladder(number_of_steps - 1) + ladder(number_of_steps - 2) + ladder(number_of_steps - 3);
}

int main()
{
    printf("Please provide the number of steps: ");
    int number_of_steps;
    scanf("%d", &number_of_steps);

    unsigned long long res = ladder(number_of_steps);
    printf("There are %lld different ways to climb the ladder\n", res);

    return 0;
}