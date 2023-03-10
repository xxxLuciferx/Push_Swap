/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:50:27 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/10 20:31:54 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int swap;
	
	swap = stack->ptr->content;
	stack->ptr->content = stack->ptr->next->content;
	stack->ptr->next->content = swap;
	write(1, "sa\n", 4);
}

void	rotate_a(t_stack *stack)
{
	int content;
	t_list *ptr;

	ptr = stack->ptr;
	content = pop(stack);
	push(stack, content);
	write(1, "ra\n", 3);
}


void	reverse_rotate_a(t_stack *stack)
{
	t_list *last_node;
	t_list *blast_node;

	blast_node = stack->ptr;
	while(blast_node->next->next)
		blast_node = blast_node->next;
	last_node = blast_node->next;
	blast_node->next = NULL;
	ft_lstadd_front(&stack->ptr, last_node);
	write(1, "rra\n", 4);
}

