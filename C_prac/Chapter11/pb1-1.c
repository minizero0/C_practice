#include <stdio.h>

int	main(void)
{
	int	arr[5];
	int j;
	int sum = 0;
	printf("정수 5개 입력하세요\n");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int tmp;
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		sum += arr[i];
	printf("입력된 정수 중 최대값 = %d\n", arr[4]);
	printf("입력된 정수 중 최소값 = %d\n", arr[0]);
	printf("입력된 정수의 총 합 = %d\n", sum);
}