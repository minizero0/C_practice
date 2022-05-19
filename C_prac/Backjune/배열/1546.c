#include <stdio.h>

int	main(void){
	int x, max = 0;
	float sum= 0;
	scanf("%d", &x);
	int y[x];

	for (int i = 0; i < x; i++){
		scanf("%d", &y[i]);
		if (y[i] > max)
			max = y[i];
	}
	for (int i = 0; i < x; i++)
		sum += ((float)y[i]/max) * 100;
	printf("%f", sum/x);
}