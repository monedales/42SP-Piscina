#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str [i] >= 97 && str[i] <= 122))
			return (0);
			i++;
	}
	return (1);
}

int main()
{
	char *sono = "aA";

	printf("teste: %d\n", ft_str_is_lowercase(sono));
}