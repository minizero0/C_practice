#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int num4;

    printf("좌 상단의 x,y를 입력하세요 :");
    scanf("%d %d", &num1, &num2);
    printf("우 하단의 x,y를 입력하세요 :");
    scanf("%d %d", &num3, &num4);
    printf("좌 상단의 x,y 좌표 : %d %d\n", num1, num2);
    printf("우 하단의 x,y 좌표 : %d %d\n", num3, num4);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", ((num1 - num3) * (num2 - num4)));
}