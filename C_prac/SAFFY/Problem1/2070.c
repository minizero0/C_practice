#include <stdio.h>

int	main(void)
{
	int t;
	
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		int x,y;
		scanf("%d %d", &x, &y);
		if (x > y)
			printf("#%d >\n",i + 1);
		else if (x == y)
			printf("#%d =\n", i + 1);
		else
			printf("#%d <\n", i + 1);
	}
}