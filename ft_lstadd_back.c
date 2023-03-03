/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:48:27 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 14:48:22 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*d;

	if (!lst || !new)
		return ;
	d = *lst;
	if (*lst)
	{
		while (d -> next)
			d = d -> next;
		d -> next = new;
	}
	else
		*lst = new;
}
