#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((src[cont] != '\0') && (cont < n))
	{
		dest[cont] = src[cont];
		cont++;
	}
	
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

int main (void)
{
	char *socorro = "estou te ligando de um orelhao";
	char meatende[30];
	size_t n = 16;

	printf("sorria que eu %s\n", ft_strncpy (meatende, socorro, n));

	return (0);
}