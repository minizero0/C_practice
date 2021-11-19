#include <stdio.h>

int main(void)
{
    int result;
    int num1, num2, num3;
    
    printf("정수를 3개 입력하시오: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    result = num1 + num2 + num3;
    printf("%d + %d + %d = %d", num1, num2, num3, result);
    return 0;
}