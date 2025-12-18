#include <stdio.h>

int main(int arguements_count, char* arguements[])
{
    char* file_to_open = arguements[1];
    printf("Should open: %s\n", file_to_open);
    printf("Hello world\n");
    return 0;
}