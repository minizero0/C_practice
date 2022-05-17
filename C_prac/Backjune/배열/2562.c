#include <stdio.h>

int	main(void){
	int arr[10];

	int max = 0;
	for (int i = 0; i < 9; i++){
		scanf("%d", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < 9; i++){
		if (arr[i] == max)
			printf("%d\n%d", arr[i], i+1);
	}
}