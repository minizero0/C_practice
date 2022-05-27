#include <stdio.h>
#include <stdlib.h>

int	main(void){
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++){
		int count = 0;
		int temp = i;
		while (temp){
			if (temp % 10 != 0 && (temp % 10) % 3 == 0)
				count++;
			temp /= 10;
		}
		if (count > 0){
			for (int k = 0; k < count; k++)
				printf("-");
		}
		else
			printf("%d", i);
		printf(" ");
	}
}