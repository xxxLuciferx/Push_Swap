/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:08:42 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 17:27:17 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void		list_to_stack(t_stack *stack, t_list *l_numbers)
{
	t_list *ptr;
	
	ptr = l_numbers;
	while (ptr)
	{
		ft_lstadd_back(&stack->ptr, ft_lstnew(ptr->content));
		ptr = ptr->next;
	}
	stack->size = ft_lstsize(stack->ptr);
}