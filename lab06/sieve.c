#include <stdio.h>

#define TABLE_SIZE 50

int main()
{
    int table[50];

    for (int i = 2; i < TABLE_SIZE; i++)
    {
        table[i] = 1;
    }

    for (int i = 2; i < TABLE_SIZE; i++)
    {
        if (table[i] != 0)
        {
            for(int j = 2 * i; j < TABLE_SIZE; j += i)
            {
                table[j] = 0;
            }
        }
    }

    for (int i = 2; i < TABLE_SIZE; i++)
    {
        if (table[i] == 1)
        {
            printf("%d is a prime number\n", i);
        }
    }
}