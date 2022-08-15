/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:33:14 by mbaatar           #+#    #+#             */
/*   Updated: 2022/08/15 14:49:46 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Allocates sufficient memory for a copy of the string s1, does the copy,
** and returns a pointer to it.
*/

char	*ft_strdup(const char *str)
{
	return (ft_substr(str, 0, ft_strlen(str)));
}
