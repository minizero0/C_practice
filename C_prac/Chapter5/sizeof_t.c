#include <stdio.h>

int main(void)
{
    int num = 10;
    long long num2 = 10;
    char num3 = 1;
    int size1 = sizeof(num);
    int size2 = sizeof(int);
    int size3 = sizeof(num2);
    int size4 = sizeof(long long);
    int size5 = sizeof(num3);

    printf("%d\n", size1);
    printf("%d\n", size2);
    printf("%d\n", size3);
    printf("%d\n", size4);
    printf("%d\n", size5);
}