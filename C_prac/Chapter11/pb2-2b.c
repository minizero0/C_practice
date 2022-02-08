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
	i = 0;
	while (i < index / 2)
	{
		char tmp;
		tmp = str[i];
		str[i] = str[index - i - 1];
		str[index - i - 1] = tmp;
		i++;
	}
	printf("%s", str);
}