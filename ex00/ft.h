/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:50:00 by gekang            #+#    #+#             */
/*   Updated: 2020/07/13 20:37:33 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// it's called 'include guard' which help ensure the desired header file is included only once. (same for #pragma once)

#ifndef FT
# define FT //indentation for readability

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif // it's better to comment which ifndef the endif is terminating because there's no indentation in macros
