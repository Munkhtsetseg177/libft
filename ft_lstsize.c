/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munkhtsetsegbaatar <munkhtsetsegbaatar@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:23:40 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/11 21:28:09 by munkhtsetse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		temp;
	t_list	*elem;

	temp = 0;
	if (lst == NULL)
		return (temp);
	elem = lst;
	while (elem != NULL)
	{
		elem = elem->next;
		temp++;
	}
	return (temp);
}
