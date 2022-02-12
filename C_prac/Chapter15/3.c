#include <stdio.h>

int	main(void)
{
	int arr[10];
	int start = 0, len = 9;

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++)
	{
		int num;
		printf("입력 : ");
		scanf("%d", &num);
		if (num % 2 == 1)
			arr[start++] = num;
		else
			arr[len--] = num;
	}
	for (int i = 0; i < 10; i++)
		printf("%d, ", arr[i]);
}