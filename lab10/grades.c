#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50

int main()
{
    // write to file

    FILE* file_to_write = fopen("grades.dat", "wb");
    if(!file_to_write)
    {
        perror("Failed to open file");
        return 1;
    }

    while(1)
    {
        char name[NAME_SIZE] = "";
        int grade = -1;
        printf("Enter name (STOP to stop): ");
        scanf("%s", name);
        if(strcmp(name, "STOP") == 0)
        {
            break;
        }
        
        printf("Enter grade: ");
        scanf("%d", &grade);
        fwrite(name, NAME_SIZE, 1, file_to_write);
        fwrite(&grade, sizeof(int), 1, file_to_write);
    }

    fclose(file_to_write);

    // read file

    FILE* file_to_read = fopen("grades.dat", "rb");
    if(!file_to_read)
    {
        perror("Failed to open file to read");
        return 1;
    }

    char name_buffer[NAME_SIZE];

    size_t bytes_read = fread(name_buffer, NAME_SIZE, 1, file_to_read);
    while(bytes_read != 0)
    {
        int grade = -1;
        fread(&grade, sizeof(int), 1, file_to_read);

        printf("I am %s and I have grade of %d\n", name_buffer, grade);

        bytes_read = fread(name_buffer, NAME_SIZE, 1, file_to_read);
    }

    fclose(file_to_read);

    return 0;
}