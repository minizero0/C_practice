#include <stdio.h>

int	main(void)
{
	int arr[] = {1,2,3,4,5};
	int *ptr  = &arr[4];
	int sum = 0;
	while (*ptr)
	{
		sum += *ptr;
		ptr--;
	}
	printf("%d\n", sum);
}