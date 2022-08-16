
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\n')
	{
		write (1, &str[cont], 1);
		cont++;
	}
}

int	main()
{
	char	*meudeus;
	meudeus = "que sono";

	ft_putstr(meudeus);
	printf("\n");
}