#include <stdio.h>

int main(void)
{
    int i, j;
    i = 0;
    j = 0;
    while (i<5)
    {
        while (j != i)
        {
            printf("O");
            j++;
        }
        printf("*\n");
        i++;
        j = 0;
    }
}