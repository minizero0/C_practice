#include <stdio.h>

int	main(void){
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		int test;
		scanf("%d", &test);
		int arr[test];
		int count = 0;
		for (int j = 0; j < test; j++){
			scanf("%d", &arr[j]);
		}
		while (1){
			int c = 0;
			for (int k = 0; k < test; k += 2){
				if (k + 1 > test){
					break;
				}
				if (arr[k] > arr[k + 1]){
					int tmp;
					tmp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = tmp;
					c++;
				}
			}
			for (int a = 1; a < test; a += 2){
				if (a + 1 > test)
					break;
				if (arr[a] > arr[a + 1]){
					int tmp;
					tmp = arr[a];
					arr[a] = arr[a + 1];
					arr[a + 1] = tmp;
					c++;
				}
			}
			if (c == 0)
				break;
			count++;
		}
		printf("#%d %d\n", i + 1, count);
	}
}