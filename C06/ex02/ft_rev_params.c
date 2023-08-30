/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:25:59 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/07 19:40:33 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			while (argv[argc -1][i] != '\0')
			{
				write(1, &argv[argc -1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			argc--;
		}
	}
	else
		return (-1);
}
