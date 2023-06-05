/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:25:20 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/17 11:43:04 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//applies function f to content of each element of list. 
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
