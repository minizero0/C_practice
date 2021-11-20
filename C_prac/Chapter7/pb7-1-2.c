#include <stdio.h>

int main(void)
{
    int num;
    int index;

    printf("양의 정수를 입력하세요:");
    scanf("%d", &num);

    index = 1;
    while(num)
    {
        printf("3 * %d = %d\n", index, 3 * index);
        index++;
        num--;
    }
}