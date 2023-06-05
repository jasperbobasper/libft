/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:22:40 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/21 16:16:43 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Returns the last element of the list.
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*now;

	now = lst;
	if (!lst)
		return (NULL);
	while (now->next != NULL)
	{
		now = now->next;
	}
	return (now);
}
