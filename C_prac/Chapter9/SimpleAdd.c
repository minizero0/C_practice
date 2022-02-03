#include <stdio.h>

int	add(int a, int b)
{
	return a + b;
}

int	main(void)
{
	int	result;
	result = add(3, 4);
	printf ("result = %d\n", result);
	result = add(5,7);
	printf ("result = %d\n", result);
	return 0;
}