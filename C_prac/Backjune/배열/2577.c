#include <stdio.h>

int	main(void)
{
	int x, y, z, sum;
	int arr[10] = {};
	scanf("%d %d %d", &x, &y, &z);

	sum = x * y * z;
	while (sum > 0){
		arr[sum % 10]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}