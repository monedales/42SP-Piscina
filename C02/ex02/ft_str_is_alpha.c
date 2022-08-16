/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:36:33 by maletici          #+#    #+#             */
/*   Updated: 2022/07/26 21:36:38 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str [i] >= 97 && str[i] <= 122)))
			return (0);
			i++;
	}
	return (1);
}

int	main(void)
{
	char	*subs;

	subs = "a";
	printf("teste: %d\n", ft_str_is_alpha(subs));
}
