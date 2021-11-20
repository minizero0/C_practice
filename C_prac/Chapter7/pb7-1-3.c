#include <stdio.h>

int main(void)
{
    int num;
    int result = 0;

    do
    {
        printf("더할 정수를 입력하세요; (0을 넣으면 종료)");
        scanf("%d", &num);
        result += num;
        
    } while (num != 0);
    printf("모든 수의 합은 = %d\n", result);    
}