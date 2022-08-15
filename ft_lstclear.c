/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaatar <mbaatar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:21:36 by munkhtsetse       #+#    #+#             */
/*   Updated: 2022/08/15 11:27:13 by mbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** deletes and frees the given node and every successor of that node, 
** using the function 'del' and free(3).Finally ponter to the list
**  must be set to NULL
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			(*del)((*lst)->content);
			free(*lst);
			*lst = temp;
		}
	}
}
