#include <stdio.h>

int	main(void)
{
	int arr[5][5];

	int i, j, num;
	

	for (i = 0; i < 4; i++)
	{
		int sum1 = 0;
		for (j = 0; j < 4; j++)
		{
			
			scanf("%d", &arr[i][j]);
			sum1 += arr[i][j];
		}
		arr[i][4] = sum1;
	}
	arr[4][4] = 0;
	for (i = 0; i < 4; i++)
	{
		int sum2 = 0;
		for (j = 0; j < 4; j++)
			sum2 += arr[j][i];
		arr[4][i] = sum2;
		arr[4][4] += sum2;
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}