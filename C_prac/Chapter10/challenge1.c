#include <stdio.h>
#include <string.h>

void	trans(int num)
{
	char hexa[20] = {0 ,};
	int	position = 0;
	while (1)
	{
		int mod = num % 16;
		if (mod < 10)
			hexa[position] = mod + 48;
		else
			hexa[position] = mod + 55;
		position++;
		num = num / 16;
		if (num == 0)
			break;
	}
	for (int i = position; i >= 0; i--)
		printf("%c", hexa[i]);
}

int	main(void)
{
	int	num;

	printf("정수를 입력하세요 : \n");
	scanf("%d", &num);
	trans(num);
}