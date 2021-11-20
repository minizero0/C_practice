#include <stdio.h>

int main(void)
{
    char a;
    a = 'a';

    while (a <= 'z')
    {
        printf("%c", a);
        a++;
    }
    printf("\n");
    printf("a(%d) - A(%d)의 갭 = %d",'a', 'A', 'a' - 'A');
}