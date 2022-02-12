#include <stdio.h>

int	CallValue(int num)
{
	return num * num;
}

int	CallRefer(int *num)
{
	return *num * *num;
}

int main(void)
{
	int num = 5;
	int num1 = 7;
	printf("%d\n", CallValue(num));
	printf("%d\n", CallRefer(&num1));
}