#include <stdio.h>

int	main(void)
{
	int x;
	scanf("%d", &x);
	
	int y = x;
	while (x > 0)
	{
		for (int i = y; i >= x; i--)
			printf("*");
		printf("\n");
		x--;
	}
}