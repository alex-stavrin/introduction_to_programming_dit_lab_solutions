#include <stdio.h>

void pyramid1()
{
    printf("Enter number of lines: ");
    int number_of_lines;
    scanf("%d", &number_of_lines);

    for(int i = 0; i < number_of_lines; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            putchar('*');
        }

        putchar('\n');
    }
}

void pyramid2()
{
    printf("Enter number of lines: ");
    int number_of_lines;
    scanf("%d", &number_of_lines);

    printf("Enter number of stars to increase per line: ");
    int delta_star_per_line;
    scanf("%d", &delta_star_per_line);

    for(int i = 0; i < number_of_lines; i++)
    {
        for(int j = 0; j < (i*delta_star_per_line) + 1; j++)
        {
            putchar('*');
        }

        putchar('\n');
    }
}

int main()
{
    // pyramid1();

    pyramid2();
}