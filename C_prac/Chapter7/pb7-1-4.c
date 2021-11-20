#include <stdio.h>

int main(void)
{
    int num, index;

    printf("출력할 구구단의 정수를 입력하세요: ");
    scanf("%d", &num);

    index = 9;
    while (index)
    {
        printf("%d * %d = %d\n", num, index, num * index);
        index--;
    }
}