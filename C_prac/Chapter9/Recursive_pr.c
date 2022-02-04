#include <stdio.h>

void	Recursive(int num)
{
	if (num<=0)
		return;
	Recursive(num-1);
	printf("Recursive call~ %d\n", num);
}

int	main(void)
{
	Recursive(5);
}