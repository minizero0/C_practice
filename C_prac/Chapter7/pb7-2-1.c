#include <stdio.h>

int main(void)
{
    int num, num1, result;

    num1 = 5;
    result = 0;
    
    while(num1)
    {
        printf("합을 구할 정수 입력:");
        scanf("%d", &num);
        if(num <= 0)
        {
            printf("1 이상의 정수만 입력 가능.\n");
            num1++;
        }
        result += num;
        num1--;
    }
    printf("%d", result);
}