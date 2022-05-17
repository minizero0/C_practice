#include <stdio.h>

int	main(void){
	int x,y,z, sum;

	int arr[100] = {0, };
	scanf("%d %d %d", &x, &y, &z);
	sum = x*y*z;
	for (int i = 0; sum > 0; i++)
	{
		arr[sum % 10]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}
}