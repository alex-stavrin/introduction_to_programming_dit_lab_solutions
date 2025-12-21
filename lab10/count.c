#include <stdio.h>

int main(int arguements_count, char* arguements[])
{
    char* file_name = arguements[1];
    
    if (!file_name)
    {
        perror("Not file name provided");
        return 1;
    }

    FILE* file = fopen(file_name, "r");
    if (!file)
    {
        perror("Error opening file");
        return 1;
    }

    // note : we will count \n as a character (which it is)

    char current_character = getc(file);
    int character_count = 0;
    // lets count first line
    int new_line_count = 1; 
    while(current_character != EOF)
    {
        if(current_character == '\n')
        {
            new_line_count++;
        }
        character_count++;
        current_character = getc(file);
    }

    printf("Character count: %d\n", character_count);
    printf("Lines count: %d\n", new_line_count);

    return 0;
}