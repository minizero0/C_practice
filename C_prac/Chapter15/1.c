#include <stdio.h>

void hor(int *arr)
{
	printf("홀수 출력");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
}

void jjac(int *arr)
{
	printf("짝수 출력");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
}

int	main(void)
{
	int arr[10];

	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++)
	{
		int num;
		printf("입력 :");
		scanf("%d", &num);
		arr[i] = num;
	}
	hor(arr);
	printf ("\n");
	jjac(arr);
}