/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:38:28 by maletici          #+#    #+#             */
/*   Updated: 2022/07/26 14:39:10 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int cont;
	cont = 0;
	
	while (src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	
	//dest[cont] = src[cont]; 
	return(dest);
}

int main(void)
{
    char leticia[] = "moneda";
	char copia[7] = "maria";
	printf("o char src leticia é %s\n", leticia);
	printf("o char dest copia é %s\n", copia);
	printf("a função acontecendo: %s\n", ft_strcpy(copia, leticia));
	printf("o char dest copia é %s\n", copia);
}