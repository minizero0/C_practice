#include <stdio.h>
//두 개의 정수를 입력 받아 최대공약수를 구하는 프로그램
//유클리드 호제법 활용 
int	main(void)
{
	int	num1,num2;

	printf("정수 두 개를 입력하세요\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 > num2)
	{
		while (num1)
		{
			int tmp = num1 % num2;
			if (tmp == 0 )
			{
				printf("%d\n", num2);
				return 0;
			}
			num1 = num2;
			num2 = tmp;
		}
	}
	else
	{
		while (num2)
		{
			int tmp = num2 % num1;
			if (tmp == 0 )
			{
				printf("%d\n", num1);
				return 0;
			}
			num2 = num1;
			num1 = tmp;
		}
	}

	
}