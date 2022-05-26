#include <stdio.h>

int	main(void)
{
	int t;
	int arr[10];
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		int max = 0;
		for (int j = 0; j < 10; j++){
			scanf("%d", &arr[j]);
			if (arr[j] > max)
				max = arr[j];
		}
		printf("#%d %d\n", i + 1, max);
	}
}