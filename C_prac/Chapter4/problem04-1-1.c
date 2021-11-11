#include <stdio.h>

void facq(int i)
{
    if(i > 1)
        facq(i / 2);
    printf("%d", i % 2);
}

int main(void)
{
    int i;
    i = 8;
    while(i <=20)
    {
        facq(i);
        printf("\n");
        i++;
    }
}