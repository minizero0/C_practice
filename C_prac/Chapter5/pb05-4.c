#include <stdio.h>

int main(void)
{
    int num;

    printf("아스키 코드값 하나 넣어주세요: ");
    scanf("%d", &num);
    
    printf("%d의 아스키 코드 = %c", num, num);
}