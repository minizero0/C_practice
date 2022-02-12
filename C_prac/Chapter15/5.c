#include <stdio.h>



int	main(void)
{
	int arr[7];
	int len = sizeof(arr) / sizeof(int);
	int i, j;
	
	for (int i = 0; i < len; i++)
	{
		int num;
		printf("입력 : ");
		scanf("%d", &num);
		arr[i] = num;
	}
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (arr[j] > arr[i])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			j++;
		}
		i++;
	}
	while (len)
	{
		printf("%d", arr[len - 1]);
		len--;
	}
}