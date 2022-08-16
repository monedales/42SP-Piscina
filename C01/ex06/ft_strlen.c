/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:53:43 by maletici          #+#    #+#             */
/*   Updated: 2022/07/25 15:53:52 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int cont;

	cont = 0; 
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int main()
{
	char	socorro[] = "deus";
	printf("o número de caracteres é: %d", ft_strlen(socorro));
}