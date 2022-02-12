#include <stdio.h>

void Swap3(int *num1, int *num2, int *num3)
{
	int	temp;
	temp = *num3;
	*num3 = *num2;
	*num2 = *num1;
	*num1 = temp; 
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d, %d, %d", num1, num2, num3);
}