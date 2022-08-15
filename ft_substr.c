/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:54:00 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 11:21:58 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	/26 Checks if its trying to create a substring bigger than `s`
** extract substring from string
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	size;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	size = len + 1;
	sub = (char *) malloc(size * sizeof(char));
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
/*
#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;
	size_t j;

	sub = (char *)malloc(sizeof(*s) *(len + 1));
	if(!sub)
		return (NULL);

	i = 0;
	j = 0; 

	while(s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i]; 
			j ++;
		}
		i ++;
	}
	sub[j] = 0;
	return (sub);
}
*/