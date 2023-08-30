/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:12:04 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/16 15:56:31 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

int	ft_finallen(char **strs, int size, char *sep)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len = final_len + ft_strlen(strs[i]);
		i++;
	}
	final_len = final_len + (size - 1) * ft_strlen(sep) + 1;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*d;

	if (size == 0)
	{
		d = malloc(sizeof(char));
		*d = 0;
		return (d);
	}
	d = malloc(sizeof(char) * ft_finallen(strs, size, sep));
	if (!d)
		return (NULL);
	*d = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		if (i < size - 1)
			ft_strcpy(d, sep);
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char*));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 17 + 1);
	strs[0] = "Olá";
	strs[1] = "avaliador,";
	strs[2] = "eu não aguento mais!";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}*/
