#include <stdio.h>
#include <string.h>

int	main(void)
{
	int test, std;
	int score[1000];

	scanf("%d", &test);
	for (int i = 0; i < test; i++){
		float avg = 0;
		int count = 0;
		scanf("%d", &std);
		for (int j = 0; j < std; j++){
			scanf("%d", &score[j]);
			avg += score[j];
		}
		avg /= std;
		for (int z = 0; z < std; z++){
			if (score[z] > avg){
				count++;
			}
		}
		printf("%.3f%%\n", (float)100 / std * count);
	}
}