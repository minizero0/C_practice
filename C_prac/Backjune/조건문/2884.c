#include <stdio.h>

int	main(void)
{
	int h,m;

	scanf("%d %d", &h, &m);
	
	if (m - 45 < 0 ){
		if (h - 1 < 0)
			h = 24;
		printf("%d %d", h - 1, 60 + m - 45);
	}
	else
		printf("%d %d", h, m - 45);
}