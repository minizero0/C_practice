#include <stdio.h>

int main(void)
{
    int array[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i >= j)
                array[i][j] = i + 1;
            else
                array[i][j] = 0;
            
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}