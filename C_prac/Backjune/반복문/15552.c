#include <stdio.h>

int	main(void)
{
	int x,y,z;
	scanf("%d", &z);
	while (z--)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
}