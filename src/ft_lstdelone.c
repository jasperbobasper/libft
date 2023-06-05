/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:24:10 by jpfannku          #+#    #+#             */
/*   Updated: 2021/06/18 10:04:15 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Frees the memory of an element using the function 'del' given as a parameter
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del((void *)lst);
}
