#include <stdio.h>

int main(void){
    int num1, num2, num3, sum;

    printf("국어 점수 입력:\n");
    scanf("%d", &num1);
    printf("영어 점수 입력:\n");
    scanf("%d", &num2);
    printf("수학 점수 입력:\n");
    scanf("%d", &num3);

    sum = (num1 + num2 + num3) / 3;
    if (sum >= 90)
        printf("A");
    else if (sum >= 80)
        printf("B");
    else if (sum >= 70)
        printf("C");
    else if (sum >= 50)
        printf("D");
    else 
        printf("F");
    return (0);
}