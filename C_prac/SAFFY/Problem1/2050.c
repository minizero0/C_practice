#include <stdio.h>
#include <string.h>

int	main(void){
	char alpha[200];

	scanf("%s", alpha);
	
	for (int i = 0; i < strlen(alpha); i++){
		printf("%d ", alpha[i] - 64);
	}
}