#include <stdio.h>

int	main(void)
{
	int	num;
	int	num2;
	printf("start\n");
	for (num = 2; num <= 8; num++)
	{
		if (num == 3 || num == 5 || num ==7)
			continue;
		printf("%d단\n", num);
		for (num2 = 1; num2 <= num; num2++)
		{
			printf("%d * %d = %d\n", num, num2, num * num2);
		}
	}
	printf("end\n");
}