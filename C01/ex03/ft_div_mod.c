/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:02:04 by maletici          #+#    #+#             */
/*   Updated: 2022/07/18 18:07:35 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int c;
	c = 10;

	int d;
	d = 6;

	int div = c / d;
	
	int *pdiv = &div;
	
	int mod = c % d;
	int *pmod = &mod;

	printf("valor de c: %d\n", c);
	printf("valor de d: %d\n", d);
	ft_div_mod(c, d, pdiv, pmod);
	printf("valor de c dividido por d e valor do módulo de c e d: %d\n%d", *pdiv, *pmod);
}