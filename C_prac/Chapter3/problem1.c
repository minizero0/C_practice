#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("두개의 정수를 입력하시오:\n");
    scanf("%d %d", &num1, &num2);

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    return 0;
}