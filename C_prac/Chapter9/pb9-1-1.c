#include <stdio.h>

//세 개의 정수를 인자로 받아서  그 중  가장  큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 정의해보자.
//그릭고 이 함숟들을 호출하는 적절한 main 함수도 작성해보자
int	max_num(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else if (num3 > num1 && num3 > num2)
		return num3;
	else
		return 0;
}

int	min_num(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else if (num3 < num1 && num3 < num2)
		return num3;
	else
		return 0;
}

int	main(void)
{
	int	num1, num2, num3;

	printf("정수 3개를 입력하세요.\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	printf("세 개의 수 중 가장 큰 수는 = %d\n", max_num(num1, num2, num3));
	printf("세 개의 수 중 가장 작은 수는 = %d\n", min_num(num1, num2, num3));
}