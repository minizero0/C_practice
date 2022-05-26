#include <stdio.h>
#include <string.h>

int	main(void){
	char alpha[200];

	scanf("%s", alpha);
	
	for (int i = 0; i < strlen(alpha); i++){
		if (alpha[i] >= 97 && alpha[i] <= 122)
			alpha[i] -= 32;
		printf("%c", alpha[i]);
	}
	
}