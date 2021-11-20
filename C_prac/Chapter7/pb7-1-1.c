#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 하나를 입력하세요.");
    scanf("%d", &num);

    while (num)
    {
        printf("Hello World!\n");
        num--;
    }
}