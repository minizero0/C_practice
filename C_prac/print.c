#include <stdio.h>

int main(void)
{
    int num1 , num2;
    int sum = 0;
    int i;
    
    printf("두개의 정수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    for ( i = num1; i <= num2; i++)
    {
        sum += i;
    }

    printf("%d부터 %d까지의 합 : %d\n ", num1 , num2, sum);

    return 0;
}