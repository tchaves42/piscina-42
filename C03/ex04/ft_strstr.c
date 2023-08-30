/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:00:14 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/03 17:37:04 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*int	main()
{
	char	src[] = "o vasco so me deixa triste";
	char	find[] = "so";
	printf("%s", ft_strstr(src, find));
}*/
