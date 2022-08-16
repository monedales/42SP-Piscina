/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:57:59 by maletici          #+#    #+#             */
/*   Updated: 2022/07/20 18:28:16 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_number(int num1, int num2, int num3);

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				print_number(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int num1, int num2, int num3)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(num3 + '0');
	if (!(num1 == 7 && num2 == 8 && num3 == 9))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
