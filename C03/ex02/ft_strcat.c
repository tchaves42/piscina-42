/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:21:39 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/03 17:22:45 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		(dest[i] = src[j]);
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "aguento mais";
	char	dest[] = "nao ";

	printf("%s", ft_strcat(dest, src));
}*/
