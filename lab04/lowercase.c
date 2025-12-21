#include <stdio.h>

void lowercase1()
{
    int current_char = getchar();
    while(current_char != EOF)
    {
        if(current_char >= 65 && current_char <= 90)
        {
            current_char += 32;
        }
        putchar(current_char);
        current_char = getchar();
    }
}

void lowercase2()
{
    int current_char = getchar();
    while(current_char != EOF)
    {
        if(current_char >= 65 && current_char <= 90)
        {
            current_char += 32;
        }
        else if(current_char >= 97 && current_char <= 122)
        {
            current_char -= 32;
        }
        putchar(current_char);
        current_char = getchar();
    }
}

int main()
{
    lowercase2();
}