/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:42:03 by tchaves           #+#    #+#             */
/*   Updated: 2023/07/30 02:40:54 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (((row == 1) || (row == y)) && ((column == 1) || (column == x)))
				ft_putchar('o');
			else if ((row == 1) || (row == y))
				ft_putchar(45);
			else if ((column == 1) || (column == x))
				ft_putchar(124);
			else
				ft_putchar(' ');
			column++;
		}
		row++;
		ft_putchar('\n');
	}
}
