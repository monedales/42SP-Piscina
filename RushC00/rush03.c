/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanoel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:03:34 by dmanoel-          #+#    #+#             */
/*   Updated: 2022/07/09 11:03:41 by dmanoel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// abbreviations: CORN = CORNER, BORD = BORDER
#define TOP_LEFT_CORN 'A'     /*             (*)T_B_B --V                    */
#define TOP_RIGHT_CORN 'C'    /*     (@)T_L_C -> |@|*|*|*|*|?| <-T_R_C(?)    */
#define BOTTOM_LEFT_CORN 'A'  /*                 |%| FILL  |%|               */
#define BOTTOM_RIGHT_CORN 'C' /*      (%)L_R_B-> |%| FILL  |%| <-L_R_B(%)    */
#define TOP_BOTTOM_BORD 'B'   /*                 |%| FILL  |%|               */
#define LEFT_RIGHT_BORD 'B'   /*     (/)B_L_C -> |/|*|*|*|*|&| <-B_R_C(&)    */
#define FILL ' '              /*             (*)T_B_B --^                    */

void	ft_putchar(char c);
//x = column, y = row
void	rush(int x, int y);

void	print_row(char left_border, char fill, char right_border, int x);

void	rush(int x, int y)
{
	int	middle_row_count;

	middle_row_count = y - 2;
	if (x < 1 || y < 1)
		return ;
	print_row(TOP_LEFT_CORN, TOP_BOTTOM_BORD, TOP_RIGHT_CORN, x);
	while (middle_row_count > 0)
	{
		print_row(LEFT_RIGHT_BORD, FILL, LEFT_RIGHT_BORD, x);
		middle_row_count--;
	}
	if (y >= 2)
		print_row(BOTTOM_LEFT_CORN, TOP_BOTTOM_BORD, BOTTOM_RIGHT_CORN, x);
}

// x = column
void	print_row(char left_border, char fill, char right_border, int x)
{
	int	middle_column_count;

	middle_column_count = x - 2;
	ft_putchar(left_border);
	while (middle_column_count > 0)
	{
		ft_putchar(fill);
		middle_column_count--;
	}
	if (x >= 2)
		ft_putchar(right_border);
	ft_putchar('\n');
}
