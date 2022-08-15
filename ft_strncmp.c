/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:15:18 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 15:20:47 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Lexicographically compares not more than n characters of the
** null-terminated strings s1 and s2.  characters that appear after a `\0'
** character are not compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	idx;

	if (!len)
		return (0);
	idx = 0;
	while (idx < (len - 1) && s1[idx] == s2[idx] && s1[idx])
		idx++;
	return ((unsigned char) s1[idx]
		- (unsigned char) s2[idx]);
}
