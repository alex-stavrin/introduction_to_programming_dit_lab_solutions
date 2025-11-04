#include <stdio.h>

// true == 1
// false == 0
int is_odd(int number)
{
    return number % 2 != 0;
}

// Example of recursion 
// collatz(3)
// 1 + collatz(10)
// 1 + 1 + collatz(5)
// 1 + 1 + 1 + collatz(16)
// 1 + 1 + 1 + 1 + collatz(8)
// 1 + 1 + 1 + 1 + 1 + collatz(4)
// 1 + 1 + 1 + 1 + 1 + 1 + collatz(2)
// 1 + 1 + 1 + 1 + 1 + 1 + 1 + collatz(1)
// 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 = 8

int collatz(int number)
{
    int sequence_length = 1;
    
    if(number == 1) return sequence_length;

    if(is_odd(number) == 1) // odd
    {
        return sequence_length + collatz(3 * number + 1);
    }
    else // even
    {
        return sequence_length + collatz(number / 2);
    }
}

int collatz_it(int number)
{
    int sequence_length = 1;
    int current_number = number;
    while(current_number != 1)
    {
        if(is_odd(current_number) == 1) // is odd
        {
            current_number = 3 * current_number + 1;
        }
        else // is even
        {
            current_number = current_number / 2;
        }

        sequence_length++;
    }

    return sequence_length;
}

int main()
{
    printf("Sequence length collatz of %d (loop) : %d\n", 1, collatz_it(1));
    printf("Sequence length collatz of %d (loop) : %d\n", 42, collatz_it(42));
    printf("Sequence length collatz of %d (loop) : %d\n", 3, collatz_it(3));

    printf("Sequence length collatz of %d (recursion) : %d\n", 1, collatz(1));
    printf("Sequence length collatz of %d (recursion) : %d\n", 42, collatz(42));
    printf("Sequence length collatz of %d (recursion) : %d\n", 3, collatz(3));
}