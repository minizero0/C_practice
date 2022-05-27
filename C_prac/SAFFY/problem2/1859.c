#include <stdio.h>

int	main(void){
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		int n;
		scanf("%d", &n);
		int arr[n];
		for (int j = 0; j < n; j++)
			scanf("%d", &arr[j]);

		int max = arr[n-1];
		long long sum = 0;
		for (int j = n-2; j >=0; j--){
			if (arr[j] > max)
				max = arr[j];
			else
				sum += max - arr[i];
		}
		printf("#%d %lld", i+1, sum);
	}
}