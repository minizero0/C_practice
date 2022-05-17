#include <stdio.h>

int	main(void)
{
	int x, y, z, sum;
	scanf("%d", &z);
	while (z--)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
}