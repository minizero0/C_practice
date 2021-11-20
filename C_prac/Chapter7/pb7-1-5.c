#include <stdio.h>

int main(void)
{
    int num, num1, num2, result;
    
    printf("입력할 정수의 개수는?");
    scanf("%d", &num);

    num1 = num;
    while (num1)
    {
        printf("평균값을 구할 정수 입력: ");
        scanf("%d", &num2);
        result += num2;
        num1--;
    }
    printf("입력한 수들의 평균값은 = %d", result / num);
}