#include <stdio.h>
//재귀를 이용해 2의 n제곱 구하기

int	Recur(int n)
{
	if (n == 0)
		return 1;
	return (Recur(n - 1) * 2);

}

int main(void)
{
	int	n;
	printf("정수를 입력하세요\n");
	scanf("%d", &n);
	printf("2의 %d 제곱은 = %d\n",n, Recur(n));
}