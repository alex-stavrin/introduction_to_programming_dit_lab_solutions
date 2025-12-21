#include <stdio.h>
#include <stdlib.h>

int main(int arguements_count, char* arguements[])
{
    long long int goal = (long long int)atoll(arguements[1]);

    int total_numbers = arguements_count - 2;

    long long int numbers[total_numbers];
    for(int i = 0; i < arguements_count - 2; i++)
    {
        // skip first two (executable and goal)
        numbers[i] = (long long int)atoll(arguements[i + 2]);
    }

    int used_in_combinaton[total_numbers];
    for(int i = 0; i < total_numbers; i++)
    {
        used_in_combinaton[i] = 0;
    }

    int found_at_least_one = 0;
    for(int i = 0; i < total_numbers; i++)
    {
        for(int j = 0; j < total_numbers; j++)
        {
            if(j == i) continue;
            for(int k = 0; k < total_numbers; k++)
            {
                if(j == k || k == i) continue;
                if((numbers[i] + numbers[j] + numbers[k] == goal) 
                    && (used_in_combinaton[i] == 0 || used_in_combinaton[j] == 0 || used_in_combinaton[k] == 0))
                {
                    found_at_least_one = 1;
                    used_in_combinaton[i] = 1;
                    used_in_combinaton[j] = 1;
                    used_in_combinaton[k] = 1;
                    printf("Canditates combination found: %lld + %lld + %lld = %lld\n", numbers[i], numbers[j], numbers[k], goal);
                }                
            }
        }
    }

    if(!found_at_least_one)
    {
        printf("No combination of canditates leads to %lld\n", goal);
    }

    return 0;
}