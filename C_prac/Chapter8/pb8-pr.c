#include <stdio.h>

int	main(void)
{
	int	num, sum;

	num = 0;
	sum = 0;

	while (num <= 100)
	{
		sum += num;
		num++;
	}
	printf("sum : %d\n", sum);
	printf("num : %d\n", num);
}