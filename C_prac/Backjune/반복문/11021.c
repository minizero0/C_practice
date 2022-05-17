#include <stdio.h>

int	main(void)
{
	int x,y,z;

	scanf("%d", &z);
	for (int i = 1; i <= z; i++)
	{
		scanf("%d %d", &x, &y);
		printf("Case #%d: %d\n", i, x + y);
	}
}