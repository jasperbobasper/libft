/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:22:04 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/17 09:55:14 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Counts the number of elements in a list.
int	ft_lstsize(t_list *lst)
{
	int		sz;
	t_list	*now;

	sz = 0;
	now = lst;
	while (now != NULL)
	{
		sz++;
		now = now->next;
	}
	return (sz);
}
