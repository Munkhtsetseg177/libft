/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:06:46 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/06 09:54:34 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int
	char_in_set(char c, char const *set)
	{
		int i;

		i = 0;
		while(set [i])
		{
			if(set[i] == c)
				return (1); 
			i ++;
		}
		return (0);
	}

static	int get_str_len(const char *str, const char *set)
{
	int start;
	int char_count;
	

	start = 0;
	char_count = 0;
	while(str[start])
	{
		if(char_in_set(str[start], set))
			char_count ++;
		start ++;
	}
	return (start - char_count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char *trim;
	size_t i;
	size_t j;

	trim = malloc(sizeof(trim) * get_str_len(s, set) + 1);
	if(!(trim))
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		if(char_in_set(s[i], set))
		{
			trim[j] = s[i];
			j ++;
		}
		i ++;
	}
	return (trim);
}
