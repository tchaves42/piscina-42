/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:42:55 by tchaves           #+#    #+#             */
/*   Updated: 2023/08/15 16:44:24 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_abs.h"

int    main(void)
{
    int    index;

    index = -5;
    while (index < 5)
    {
        printf("macros::abs(%d) = %d\n", index, ABS(index));
        index++;
    }
}
