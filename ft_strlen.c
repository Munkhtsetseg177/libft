/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:03:09 by mbaatar           #+#    #+#             */
/*   Updated: 2022/05/16 10:47:46 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
    size_t count;

    count = 0;
    while(s[count] !='\0')
        count ++;
    return(count);
}