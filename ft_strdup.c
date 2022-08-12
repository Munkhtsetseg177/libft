/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:12:03 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/09 12:39:17 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
