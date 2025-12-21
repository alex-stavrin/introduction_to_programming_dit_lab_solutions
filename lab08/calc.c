#include <stdio.h>
#include <stdlib.h>

int main(int arguements_count, char* arguements[])
{
    int number_1 = atoi(arguements[1]);
    // lets assume that the second arguement will be a single operator
    char operation = arguements[2][0];
    int number_2 = atoi(arguements[3]);

    int result = 0;
    switch(operation)
    {
        case '+':
            result = number_1 + number_2;
            break;
        case '-':
            result = number_1 - number_2;
            break;
        case '*': // we have to type \* in the console, becasue * means something else  in the terminal
            result = number_1 * number_2;
            break;
        case '/':
            result = number_1 / number_2;
            break;
        case '%':
            result = number_1 % number_2;
            break;
    }

    printf("%d\n", result);

    return 0;
}