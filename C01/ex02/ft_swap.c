/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:02:04 by maletici          #+#    #+#             */
/*   Updated: 2022/07/18 18:07:35 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

int	main()
{
	int y;
	y = 11;

	int z;
	z = 24;
	
	printf("o valor de y é: %d\n", y);
	printf("o valor de z é: %d\n", z);
	ft_swap(&y, &z);
	printf("o valor de y é: %d\n", y);
	printf("o valor de z é: %d\n", z);
	return(0);
}