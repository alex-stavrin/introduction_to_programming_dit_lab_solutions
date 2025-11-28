#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(int argc, char ** argv) 
{
    int i = 0;
    int wages[N];

    srand(N);
  
    for (i = 0 ; i < N ; i++)
    {
        wages[i] = 700 + (rand() % 2301) - 1000;
        printf("%d\n", wages[i]);
    }
    
    int sum = 0;
    i = 0;
    while (i < N)
    {
        if(wages[i] > 0)
        {
            sum += wages[i];
        }
        i++;
    }

    printf("Average wage is %0.2f\n", sum/(float)N);

    return 0;
}