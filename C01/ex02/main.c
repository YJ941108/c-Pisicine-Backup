#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int x;
	int y;
	
	x = 10;
	y = 20;
	printf("%d%d", x, y);
	ft_swap(&x, &y);
	printf("%d%d", x, y);
}
