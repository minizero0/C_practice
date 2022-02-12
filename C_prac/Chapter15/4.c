#include <stdio.h>

int ft_strlen(char *str)
{
	int index = 0;
	while (str[index])
		index++;
	return index;
}

int	main(void)
{
	char str[50];
	int index;

	printf("문자열 입력 : ");
	scanf("%s", str);
	index = ft_strlen(str);
	for (int i = 0; i < index/2; i++)
	{
		if (str[i] != str[index - i - 1])
		{
			printf("회문이 아닙니다.\n");
			return 0;
		}
	}
	printf("회문 입니다\n");	
}