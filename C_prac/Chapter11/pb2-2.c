#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;
	while (str[index])
		index++;
	return (index);
}

int	main(void)
{
	char str[20];
	int i, j, tmp;
	int	index;

	printf("단어 입력:\n");
	scanf("%s", str);

	index = ft_strlen(str);
	for (i = 0; i < index; i++)
		for (j = 0; j <= i; j++)
		{
			tmp = str[i];
			str[i] = str[j];
			str[j] = tmp;
		}
	printf("%s", str);
}