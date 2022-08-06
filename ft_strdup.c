/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:12:03 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/04 11:36:50 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] !='\0') //while(*s ++) i++;
        i ++;
    return(i);
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