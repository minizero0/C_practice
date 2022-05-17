#include <stdio.h>

int	main(void)
{
	int x,y,z;

	scanf("%d", &x);
	int i = x;
	while (x > 0)
	{
		scanf("%d %d", &y, &z);
		printf("Case #%d: %d + %d = %d\n", i - (x - 1), y, z, y + z );
		x--;
	}
}