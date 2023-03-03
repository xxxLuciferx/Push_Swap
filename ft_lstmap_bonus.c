/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:48:10 by khaimer           #+#    #+#             */
/*   Updated: 2023/02/13 17:52:40 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*ptr;

	result = NULL;
	while (lst && f)
	{
		ptr = ft_lstnew(f(lst->content));
		ft_lstadd_back(&result, ptr);
		lst = lst->next;
	}
	(void)del;
	return (result);
}
