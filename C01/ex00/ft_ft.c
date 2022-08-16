/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:25:45 by maletici          #+#    #+#             */
/*   Updated: 2022/07/22 18:28:49 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr)
{
	*nbr  = 42;
}

int	main(void)
{
	int	a;
	int *ptr;

	a = 5;
	ptr = &a;

	printf("conteúdo da var a: %d\n", a);
	printf("conteúdo do ponteiro ptr: %p\n", ptr);
	printf("conteúdo da var apontada por ptr: %d\n", *ptr);
	ft_ft(ptr);
	printf("conteúdo da var apontada por ptr: %d\n", *ptr);
}
