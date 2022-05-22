#include <stdio.h>

int	main(void)
{
	int x;
	int arr[10];

	scanf("%d", &x);

	for (int i = 0; i < x; i++){
		int sum = 0;
		for (int j = 0; j < 10; j++){
			scanf("%d", &arr[j]);
			if (arr[j] % 2 == 1)
				sum += arr[j];
		}
		printf("#%d %d\n", i + 1, sum);
	}
}