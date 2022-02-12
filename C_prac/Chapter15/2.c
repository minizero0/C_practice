#include <stdio.h>

void trans(int num)
{
	int arr[10] = {0 ,};
	int i = 0;
	while (num)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}

	printf ("%d\n", i);
	while (i > 0)
		printf("%d", arr[--i]);
}

int	main(void)
{
	int num;
	printf ("10진수 정수 입력 : \n");
	scanf("%d", &num);
	trans(num);
}