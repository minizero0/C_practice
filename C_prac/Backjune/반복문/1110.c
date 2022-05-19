#include <stdio.h>

int	main(void)
{
	int n;

	int sum, re;

	scanf("%d", &n);

	re = 0;
	sum = n;
	while (1){
		 n = (n % 10) * 10 + ((n /10) + (n % 10)) % 10;
		 re++;
		 if (n == sum)
		 	break;
	}
	printf("%d", re);
}
