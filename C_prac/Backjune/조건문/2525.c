#include <stdio.h>

int	main(void)
{
	int x,y,z;

	scanf("%d %d %d", &x, &y, &z);
	
	if (y + z < 60)
		printf("%d %d\n", x, y + z);
	if (y + z >= 60){
		int v;
		v = y + z - 60;
		while (v >= 60){
			v -= 60;
			x += 1;
		}
		if (x + 1 == 24)
			x = -1;
		printf("%d %d\n", x + 1, v);
	}
}