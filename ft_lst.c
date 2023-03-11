/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:07:37 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/11 17:08:59 by khaimer          ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

t_list	*ft_lstnew(int content)
{
	t_list	*file;

	file = (t_list *)malloc(sizeof(t_list));
	if (!file)
		return (NULL);
	file -> content = content;
	file -> next = NULL;
	return (file);
}