#include <stdio.h>
#include <string.h>

int mystrlen(char* str)
{
    char* string_pointer = str;
    int len = 0;
    while(*string_pointer != '\0')
    {
        string_pointer++;
        len++;
    }

    return len;
}

char* mystrcat(char* s1, char* s2)
{
    char* s1_pointer  = s1;
    while(*s1_pointer != '\0')
    {
        s1_pointer++;
    }

    char* s2_pointer = s2;
    while(*s2_pointer != '\0')
    {
        *s1_pointer = *s2_pointer;
        s2_pointer++;
        s1_pointer++;
    }

    *s1_pointer = '\0';

    return s1;
}

int main()
{
    int res = mystrlen("Test");
    printf("%d\n", res);

    char first_string[500] = "Test";
    char* res2 = mystrcat(first_string, " Hello");
    printf("%s\n", res2);

    char strA[80];
    char strB[80];

    char* cp_res = strcpy(strA, "This is a string.");
    char* cp_res_2 = strcpy(strB, "This is another string.");
    
    printf("%p %p %p %p\n", strA, strB, cp_res, cp_res_2);

    printf("A: %s\n", strA);
    printf("B: %s\n", strB);

    printf("A length: %d\n", mystrlen(strA));
    printf("B length: %zu   \n", strlen(strB));

    int compare_result = strcmp(strA, strB);
    if(compare_result > 0)
    {
        printf("A bigger than B\n");
    }
    else if(compare_result < 0)
    {
        printf("A smaller than B\n");
    }
    else if(compare_result == 0)
    {
        printf("A equal to B\n");
    }

    mystrcat(strA, strB);
    printf("A + B: %s\n", strA);

    strcat(strB, strA);
    printf("B + (A + B): %s\n", strB);

    char* token = strtok(strB, " .");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " .");
    }

    return 0;
}