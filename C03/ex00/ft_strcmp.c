
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while ((s1[cont] == s2[cont]) && (s1[cont] != '\n') && s2[cont] != '\n')
	{
		cont++;
	}
	return (s1[cont] - s2[cont]);
}

int main ()
{
	char *quero = "AAA";
	char *dormir = "AAB";
	
	printf("%d\n", ft_strcmp(quero, dormir));
}