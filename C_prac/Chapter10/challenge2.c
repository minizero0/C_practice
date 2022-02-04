#include <stdio.h>

int	main(void)
{
	int	num1, num2, result;

	printf("정수1를 입력하세요 : \n");
	scanf("%d", &num1);
	printf("정수2를 입력하세요 : \n");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		while (num1 >= num2)
		{
			for (int i = 1; i < 10; i++)
			{
				result = num2 * i;
				printf("%d * %d = %d\n", num2, i, result);
			}
			num2++;
		}
	}
	else if (num2 > num1)
		while (num2 >= num1)
		{
			for (int i = 1; i < 10; i++)
			{
				result = num1 * i;
				printf("%d * %d = %d\n", num1, i, result);
			}
			num1++;
		}
	

}