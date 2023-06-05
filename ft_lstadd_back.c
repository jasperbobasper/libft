/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:23:18 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/17 09:56:14 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Adds the element 'new' at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**now;

	now = lst;
	while (*now)
	{
		now = &(*now)->next;
	}
	new->next = *now;
	*now = new;
}
