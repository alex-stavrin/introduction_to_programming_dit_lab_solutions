#include <stdio.h>

int global_counter = 0;

int fib(int number)
{
    global_counter++;
    if (number == 0) return 0;
    if (number == 1) return 1;

    return fib(number - 1) + fib(number - 2);
}

int fib_it(int number)
{
    int last_one = 0;
    int last_two = 1;
    int n = 2;
    int sum = 1;
    while(n <= number)
    {
        last_two = last_one;
        last_one = sum;
        sum = last_one + last_two;
        n++;
    }

    return sum;
}

int main()
{
    printf("How many fibonacci terms would you like: ");
    int number_of_terms;
    scanf("%d", &number_of_terms);

    for(int i = 0; i < number_of_terms; i++)
    {
        int result = fib(i);
        printf("fib(%d) (recursion) = %d\n", i, result);

        int result2 = fib_it(i);
        printf("fib(%d) (loop) = %d\n", i, result2);

    }

    printf("Number of fibonacci calls: %d\n", global_counter);

    return 0;
}