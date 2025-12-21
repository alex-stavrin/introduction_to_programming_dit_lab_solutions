#include <stdio.h>

int main()
{
    int current_char = getchar();
    while(current_char != EOF)
    {
        printf("%02x", current_char);
        current_char = getchar();
    }

    return 0;
}