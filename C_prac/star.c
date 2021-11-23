#include <stdio.h>

int main(void)
{
    char array[5][5];

    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j= 0; j < 5; j++)
        {
            if(i == 0 || i == 4)
            {
                if(j == 2)
                    printf("*");
                else
                    printf(" ");
            }
            if (i == 1 || i == 3)
            {
                if(j == 0 || j ==4)
                    printf(" ");
                else
                    printf("*");
                
            }
            if (i == 2)
                printf("*");
        }
        printf("\n");
    }

    
    return 0;
}
