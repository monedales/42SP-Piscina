/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-c01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maletici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:43:12 by maletici          #+#    #+#             */
/*   Updated: 2022/07/23 18:52:00 by maletici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int y = 5;
	int *pa = &y;
	int **pb = &pa;
	int ***pc = &pb;
	int ****pd = &pc;
	int *****pe = &pd;
	int ******pf = &pe;
	int *******pg = &pf;
	int ********ph = &pg;
	int *********pi = &ph;	

	printf("conteúdo da var y: %d\n", y);
	printf("conteúdo do ponteiro pa: %p\n", pa);
	printf("conteúdo da var apontada por pa: %d\n", *pa);
	printf("endereço do ponteiro pa: %p\n", &pa);
	printf("conteúdo do ponteiro pb: %p\n", pb);
	printf("conteúdo da var apontada por pb: %d\n", **pb);
	printf("conteúdo do ponteiro pf: %p\n", pf);
	printf("conteúdo da var apontada por pf: %d\n", ******pf);
	ft_ultimate_ft(pi);
	printf("conteúdo da var apontada por pi: %d\n", *********pi);
}

