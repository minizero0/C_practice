#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	while (*ptr)
	{
		*ptr += 2;
		ptr++;
	}
	for (int i = 0; i < 5; i++)
		printf("%d, ", arr[i]);
}