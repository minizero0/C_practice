#include <stdio.h>

int main(void){
    int num1, num2;

    scanf("%d\n", &num1);
    scanf("%d\n", &num2);
    if (num1 > num2)
        printf("두 수의 차이는 = %d\n", num1 - num2);
    if (num2 > num1)
        printf("두 수의 차이는 = %d\n", num2 - num1);
    else
        return (0);
}