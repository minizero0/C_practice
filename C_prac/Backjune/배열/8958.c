#include <stdio.h>
#include <string.h>

int	main(void)
{
	int x, sum, count;
	char score[80];

	scanf("%d", &x);
	for (int i = 0; i < x; i++){
		scanf("%s", score);
		sum = 0;
		count = 1;
		for (int j = 0; j < strlen(score); j++){
			if (score[j] == 'O')
				sum += count++;
			else if (score[j] == 'X')
				count = 1;
		}
		printf("%d\n", sum);
	}
}