#include <stdio.h>

int	main(void)
{
	int	x,y,z;
	scanf ("%d %d", &x, &y);
	scanf ("%d", &z);

	x += z / 60;
	y += z % 60;

	if (y >= 60)
	{
		x += 1;
		y -= 60;
	}
	if (x >= 24)
	{
		x -= 24;
	}
	printf("%d %d", x, y);
}