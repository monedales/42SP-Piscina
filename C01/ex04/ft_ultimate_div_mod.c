#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	
	c = *a / *b;
	d = *a % *b;
	
	*a = c;
	*b = d;
}

int	main()
{
	int x;
	x = 10;

	int y;
	y = 3;

	int *ptrx;
	ptrx = &x;

	int *ptry;
	ptry = &y;

	printf("valor de *ptrx ou x: %d\n", *ptrx);
	printf("valor de *ptry ou y: %d\n", *ptry);
	ft_ultimate_div_mod(ptrx, ptry);
	printf("valor de *ptrx e *ptry são: %d e %d\n", *ptrx, *ptry);
}