#include <stdio.h>

int main(int arguements_count, char* arguements[])
{
    char* file_1_name = arguements[1];
    char* file_2_name = arguements[2];

    FILE* file_1 = fopen(file_1_name, "rb");
    if (!file_1)
    {
        perror("Error opening file 1");
        return 1;
    }

    FILE* file_2 = fopen(file_2_name, "rb");
    if (!file_2)
    {
        perror("Error opening file 2");
        return 1;
    }

    // in C byte == char
    char byte_1;
    char byte_2;
    size_t bytes_read_1 = fread(&byte_1, sizeof(char), 1, file_1);
    size_t bytes_read_2 = fread(&byte_2, sizeof(char), 1, file_2);
    while(bytes_read_1 != 0 && bytes_read_2 != 0 && byte_1 == byte_2)
    {
        bytes_read_1 = fread(&byte_1, sizeof(char), 1, file_1);
        bytes_read_2 = fread(&byte_2, sizeof(char), 1, file_2);      
    }

    if(bytes_read_1 == 0 && bytes_read_2 == 0)
    {
        printf("Files are the same\n");
    }
    else
    {
        printf("Files are not the same\n");
    }

    return 0;
}