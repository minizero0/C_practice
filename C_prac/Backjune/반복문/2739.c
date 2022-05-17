#include <stdio.h>

int	main(void)
{
	int x;
	scanf ("%d", &x);

	for (int i = 1; i <=9; i++){
		int sum;
		sum = x * i;
		printf("%d * %d = %d\n", x, i, sum);
	}
}