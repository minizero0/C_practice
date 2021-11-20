#include <stdio.h>

int main(void)
{
    char c;

    printf("알파벳 하나 입력해주세요:");
    scanf("%c", &c);

    printf("%c의 ASCII 값은 = %d 입니다.", c, c);
}