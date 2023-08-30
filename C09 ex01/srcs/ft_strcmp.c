/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:03:51 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/03 17:10:56 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d", ft_strcmp("ola mundo", "ola mundo1"));
	printf("\n%d", ft_strcmp("vasco", "vas"));
	printf("\n%d", ft_strcmp("vas", "vasco"));
	printf("\n%d", ft_strcmp("42 rio", "42 rio"));
}*/
