#include <stdio.h>

int	factorial(int num)
{
	if (num <= 0)
		return 1;
	return num * factorial(num - 1);
}

int	main(void)
{
	int num;
	printf("factorial 정수 입력 : \n");
	scanf("%d", &num);
	printf("%d! = %d \n", num, factorial(num));
}