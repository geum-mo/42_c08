/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:04:26 by gekang            #+#    #+#             */
/*   Updated: 2020/07/14 14:38:54 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_stock_str.h"

int ft_get_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_copy_str(char *src)
{
	char *dst;
	int i;

	if ((dst = (char *)malloc(ft_get_str_len(src) * sizeof(char) + 1)) == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// Defines a function returning s_stock_str structure
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	// printf("%s\n", "ft_strs_to_tab has been called successfully.");

	struct s_stock_str *arr;
	int i;

	i = 0;
	if (!(arr = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	// printf("%s\n", "malloc for result array got done successfully.");
	while (i < ac)
	{
		arr[i].size = ft_get_str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_copy_str(av[i]);
		// printf("%d\n", i);
		i++;
	};
	arr[i].str = 0;
	return (arr);
}
