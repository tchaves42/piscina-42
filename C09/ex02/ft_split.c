/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:47:28 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/17 14:48:34 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlensep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int			len_w;
	int			i;
	char		*word;

	i = 0;
	len_w = ft_strlensep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_w + 1));
	while (i < len_w)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char		**strings;
	int			i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_str(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	char	**tab;
	int	i;

	i = 0;
	tab = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}*/
