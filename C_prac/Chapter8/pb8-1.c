#include <stdio.h>

int main(void){
    int num;
    for (num = 1; num <= 100; num++)
    {
        if ((num % 7) == 0 || (num % 9) == 0)
        {
            printf("%d는 7과 9의 배수\n", num);
        }
    }
}