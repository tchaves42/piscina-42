/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:00:24 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/01 13:10:04 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main()
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 6;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("%d \n", div);
	printf("%d", mod);
}*/
