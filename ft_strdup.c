/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:12:03 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 10:53:17 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates sufficient memory for a copy of the string s1, does the copy,
** and returns a pointer to it.
*/

char	*ft_strdup(const char *src)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!(new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (*src)
		new[i ++] = *src ++;
	new[i] = '\0';
	return (new);
}
