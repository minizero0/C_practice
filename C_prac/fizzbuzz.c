#include <stdio.h>

int	main(void)
{
	//1 ~ 100 까지 출력 
	int	i;

	i = 1;
	while (i <= 100)
	{ //3의 배수는 fizz 5의 배수는 buzz 3과 5의 공배수는 fizzbuzz출력
		if (i%15 == 0)
			printf("fizzbuzz,");
		else if (i%3 == 0)
			printf("fizz,");
		else if (i%5 == 0)
			printf("buzz,");
		printf("%d,", i++);
	}
}
