#include <stdio.h>

int	main(void){
	int t;
	int arr[8] = {};
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		for (int j = 0; j < 8; j++){
			scanf("%d", &arr[j]);
		}
		if (arr[4] == 1){
			if (arr[5] == 1){
				if (arr[6] * arr[7] <= 30)
					printf("%d%d%d%d//%d%d//%d%d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
			}
		}
	}

}