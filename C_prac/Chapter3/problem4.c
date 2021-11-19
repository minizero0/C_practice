#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("정수 두개를 입력하시오: \n");
    scanf("%d %d", &num1, &num2);

    printf("몫: %d\n나머지: %d\n", num1 / num2, num1 % num2);
    return 0;
}