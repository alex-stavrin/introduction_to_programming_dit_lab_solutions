#include <stdio.h>
#include <stdlib.h>

typedef struct listnode* Listptr;

struct listnode
{
    int data;
    Listptr next;
};

void insert_at_start(Listptr* ptr, int grade)
{
    Listptr head = malloc(sizeof(struct listnode));
    head->data = grade;
    head->next = *ptr;
    *ptr = head;
}

float average(Listptr ptr)
{
    int sum = 0;
    int count = 0;
    for(Listptr current = ptr; current != NULL; current = current->next)
    {
        count++;
        sum += current->data;
    }
    
    return (float)sum / count;
}

int main()
{
    Listptr head = NULL;

    int current_grade;
    do
    {
        printf("Enter grade (-1 to stop): ");
        scanf("%d", &current_grade);
        if (current_grade != -1) insert_at_start(&head, current_grade);
    } while (current_grade != -1);

    for(Listptr current = head; current != NULL; current = current->next)
    {
        int grade = current->data;
        printf("%d\t", grade);
    }
    printf("\n");

    float average_result = average(head);
    printf("Average: %.2f\n", average_result);

    return 0;
}