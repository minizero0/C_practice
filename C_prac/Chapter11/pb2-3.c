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
	int	index;
	int i, j;

	scanf("%s", str);
	index = ft_strlen(str);

	for (i = 0; i < index; i++)
		for (j = 0; j <= i; j++)
		{
			if (str[i] < str[j])
			{
				char tmp;
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	printf ("%c\n", str[index - 1]);
}