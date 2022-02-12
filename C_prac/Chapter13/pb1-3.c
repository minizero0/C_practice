#include <stdio.h>

int ft_strlen(int *n)
{
	int index = 0;
	while (*n)
		index++;
	return (index);
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int index = 0;
	index = ft_strlen(arr);
	printf("%d\n", index);

}
