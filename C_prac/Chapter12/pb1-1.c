#include <stdio.h>

int	main(void)
{
	int num1 = 10;
	int num2 = 20;
	int	tmp;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	*ptr1 += 10;
	*ptr2 -= 20;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	printf("ptr1 = %d\n", *ptr1);
	printf("ptr2 = %d\n", *ptr2);
}
