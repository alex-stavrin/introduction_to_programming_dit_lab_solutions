#include <stdio.h>
#include <string.h>

#define MAX_LINE_SIZE 500

int main(int arguements_count, char* arguements[])
{
    char* file_to_open = arguements[1];

    FILE* file = fopen(file_to_open, "r");
    if(!file)
    {
        perror("Error opening file");
        return 1;
    }

    char userInput[10] = "YES";
    while(strcmp(userInput, "YES") == 0)
    {
        char current_line[MAX_LINE_SIZE];
        char* f_return = fgets(current_line, MAX_LINE_SIZE, file);
        if(f_return)
        {            
            printf("%s", current_line);
            int lines_read = 1;
            int breaked = 0;
            while(current_line && lines_read < 20)
            {
                char* f_return = fgets(current_line, MAX_LINE_SIZE, file);
                if(f_return)
                {
                    printf("%s", current_line);
                    lines_read++;
                }
                else
                {
                    breaked = 1;
                    break;
                }
            }

            if(!breaked)
            {                
                printf("\nType YES to continue: ");
                scanf("%s", userInput);
            }
            else
            {
                strcpy(userInput, "NO");
            }
        }
        else
        {
            strcpy(userInput, "NO");
        }
    }

    fclose(file);

    return 0;
}