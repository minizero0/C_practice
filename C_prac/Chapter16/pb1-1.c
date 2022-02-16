#include <stdio.h>

int	main(void)
{
	int arr[3][9];
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			arr[i][j] = i * j;
			printf("%d * %d = %d\n", i, j, arr[i][j]);
		}
	}
	return 0;
}