#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int index = 5;
	for (int i = 0; i < index / 2; i++)
	{
		int tmp;
		tmp = arr[i];
		arr[i] = arr[index - i];
		arr[index - i] = tmp;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}
