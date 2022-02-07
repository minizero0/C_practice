#include <stdio.h>
//도전 4
int	main(void)
{
	int	num = 3500;
	int	cream = 500;
	int	shrimp = 700;
	int coke = 400;
	int cr, sh, co;

	printf("당신이 소유하고 있는 금액 : %d원\n", num);
	for (cr = 1; cr < num / cream; cr++)
		for (sh = 1; sh < num / shrimp; sh++)
			for (co = 1; co < num / coke; co++)
				if (num == cr * cream + sh * shrimp + co * coke)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cr, sh, co);
	printf("어떻게 구입하시겠습니까?\n");
}