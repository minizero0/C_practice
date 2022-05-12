#include <stdio.h>

int	main(void)
{
	int x,y,z;

	scanf("%d %d %d", &x, &y, &z);
	
	if (x == y && y == z)
		printf("%d", 10000 + 1000 * x);
	else if (x == y)
		printf("%d", 1000 + 100 * x);
	else if (x == z)
		printf("%d", 1000 + 100 * x);
	else if (y == z)
		printf("%d", 1000 + 100 * z);
	else {
		if (x > y && x > z)
			printf("%d", x * 100);
		else if (y > z)
			printf("%d", y * 100);
		else
			printf("%d", z * 100);		
	}

}