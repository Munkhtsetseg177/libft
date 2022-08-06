/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:54:00 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/05 20:37:05 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
    size_t count;

    count = 0;
    while(s[count] !='\0')
        count ++;
    return(count);
}


void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	
	if(dst == NULL && src == NULL)
		return (0);
	i = 0;
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dst);
}

char *ft_strdup(const char *src)
{
	char *new;
	int i;

	i = 0;
	if(!(new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while( *src)
		new[i ++] =*src ++;
	new[i] = '\0';
	return (new);
}

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
	// Checks if its trying to create a substring bigger than `s`
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