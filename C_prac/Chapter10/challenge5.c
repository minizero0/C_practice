#include <stdio.h>
//소수  출력
int	main(void)
{
	printf ("1\n");

	int j;
	for (int i = 1; i < 200; i++)
	{
		for (j = 2; j <= i; j++)
			if (i % j == 0)
				break;
		if (i == j)
			printf("%d\n", i);
	}
}