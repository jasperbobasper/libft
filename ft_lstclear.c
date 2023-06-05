/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:24:45 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/17 11:29:23 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Deletes and frees every element using the function 'del' and free(3).
//sets the lst pointer to NULL
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;

	while (lst)
	{
		if (*lst == NULL)
			return ;
		now = *lst;
		del(now->content);
		*lst = now->next;
		free(now);
	}
	*lst = NULL;
}
