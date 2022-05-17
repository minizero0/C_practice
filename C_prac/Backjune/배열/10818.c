#include <stdio.h>

int	main(void){
	int a;
	scanf("%d", &a);
	int arr[a];

	int min = 1000001;
	int max = -1000001;
	for (int i = 0; i < a; i++){
		int b;
		scanf("%d", &b);
		arr[i] = b;
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i]; 
	}

	printf("%d %d", min, max);
}
