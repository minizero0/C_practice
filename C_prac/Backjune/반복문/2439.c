#include <stdio.h>

int	main(void)
{
	int x;
	scanf("%d", &x);
	
	int y = x;
	while (x > 0){
		for (int i = 1; i < x; i++)
			printf(" ");
		for (int j = y; j >= x; j--)
			printf("*");
		printf("\n");
		x--;
	}
}