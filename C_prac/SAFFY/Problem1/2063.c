#include <stdio.h>

int	main(void){
	int t;
	scanf("%d", &t);
	int arr[t];
	for (int i = 0; i < t; i++){
		scanf("%d", &arr[i]);
	}
	for (int i = t - 1; i > 0; i--){
		for (int j = 0; j < i; j++){
			if (arr[j] > arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("%d", arr[t/2]);
}