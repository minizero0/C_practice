#include <stdio.h>

int	main(void)
{
	int arr[42] = {};

	int count = 0;

	for (int i = 0; i < 10; i++){
		int x;
		scanf("%d", &x);
		arr[x % 42]++;
	}
	
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] > 0)
			count++;
	}
	printf("%d", count);
	
}