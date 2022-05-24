#include <stdio.h>

int	main(void)
{
	int x;
	int arr[10];

	scanf("%d", &x);

	for (int i = 0; i < x; i++){
		float sum = 0;
		for (int j = 0; j < 10; j++){
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		printf("#%d %.0f\n", i + 1, sum / 10);
	}
}