/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:16:53 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/08 15:54:57 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;
	int	index;

	result = nb;
	if (result <= 0)
	{
		return (0);
	}
	if (result == 1)
	{
		return (1);
	}
	index = 2;
	if (result >= 2)
	{
		while (index * index <= result)
		{
			if (index * index == result)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

/*int	main()
{
	printf("%i", ft_sqrt(16));
}*/
