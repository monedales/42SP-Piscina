#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char meudeus[] = "que sono";

	printf("o número de caracteres é: %d\n", ft_strlen(meudeus));
} 