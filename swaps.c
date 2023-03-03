/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:50:27 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 19:51:45 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top_a(t_stack *stack)
{
	int swap;
	
	swap = stack->ptr->content;
	stack->ptr->content = stack->ptr->next->content;
	stack->ptr->next->content = swap;
}

void	rotate_a(t_stack *stack)
{
	int content;
	t_list *ptr;

	ptr = stack->ptr;
	content = pop(stack);
	push(stack, content);
	free(ptr);
}


void	reverse_rotate_a(t_stack *stack)
{
	int content;
	t_list *last_node;

	last_node = stack->ptr;
	while (last_node->next)
		last_node = last_node->next;
	content = last_node->content;
	ft_lstadd_front(&stack->ptr, ft_lstnew(content));
	
}