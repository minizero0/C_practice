#include <stdio.h>

int	main(void)
{
	char str[10];
	int count = 0;
	
	printf("영단어를 입력해봐\n");
	scanf("%s", str);
	while (str[count] != '\0')
		count++;
	printf("%d\n", count);
}