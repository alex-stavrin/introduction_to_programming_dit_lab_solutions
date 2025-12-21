#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    // allocate 2D array of characters
    char** array = malloc(sizeof(char*) * N);
    for(int i = 0; i < N; i++)
    {
        array[i] = malloc(sizeof(char) * M);
    }

    // read mines
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            char character;
            scanf("%c", &character);

            if(character == '\n') // ignore new lines
            {
                j--;
                continue;
            }

            array[i][j] = character;
        }
    }

    // show mines
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%c", array[i][j]);
        }
        printf("\n");
    }

    // show mines with numbers
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(array[i][j] == '*')
            {
                printf("*");
            }
            else
            {
                int mines = 0;
                // we will left,right,top,bot,diagonals (top and right, top and left, bottom and right, bottom and left)

                // check left
                if(j > 0)
                {
                    if(array[i][j-1] == '*')
                    {
                        mines++;
                    }
                }

                // check right
                if(j < M - 1)
                {
                    if(array[i][j+1] == '*')
                    {
                        mines++;
                    }
                }

                // check top
                if(i > 0)
                {
                    if(array[i-1][j] == '*')
                    {
                        mines++;
                    }
                }

                // check bottom
                if(i < N - 1)
                {
                    if(array[i+1][j] == '*')
                    {
                        mines++;
                    }
                }
                
                // check diagonal top and right
                if(i > 0 && j < M - 1)
                {
                    if(array[i-1][j+1] == '*')
                    {
                        mines++;
                    }
                }

                // check diagonal top and left
                if(i > 0 && j > 0)
                {
                    if(array[i-1][j-1] == '*')
                    {
                        mines++;
                    }
                }

                // check diagonal bottom and right
                if(i < N - 1 && j < M - 1)
                {
                    if(array[i+1][j+1] == '*')
                    {
                        mines++;
                    }
                }

                // check diagonal bottom and left
                if(i < N - 1 && j > 0)
                {
                    if(array[i+1][j-1] == '*')
                    {
                        mines++;
                    }
                }

                printf("%d", mines);
            }
        }
        printf("\n");
    }

    // free alocated 2D array
    for(int i = 0; i < N; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}