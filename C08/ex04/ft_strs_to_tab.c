/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:12:44 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/16 12:02:44 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!d)
	{
		return (0);
	}
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*d;

	d = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!d)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		d[i].size = ft_strlen(av[i]);
		d[i].str = av[i];
		d[i].copy = ft_strdup(av[i]);
		i++;
	}
	d[i].str = 0;
	d[i].copy = 0;
	return (d);
}

/*int	main(int argc, char **argv)
{
    int					index;
    struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
    	index = 0;
    	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/
