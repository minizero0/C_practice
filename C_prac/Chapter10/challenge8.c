#include <stdio.h>
//재귀를 이용해 2의 n제곱 구하기

int	Recur(int num)
{
	if (num == 0)
		return 1;
	return Recur(num - 1) * 2;
}

int	main(void)
{
	int num ;
	printf("정수를 입력하세요\n");
	scanf("%d", &num);
	printf("2의 %d승은 = %d\n",num, Recur(num));
}