/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:50:27 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/13 22:41:54 by khaimer          ###   ########.fr       */
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

void	swap_b(t_stack *stack)
{
	int swap;
	
	swap = stack->ptr->content;
	stack->ptr->content = stack->ptr->next->content;
	stack->ptr->next->content = swap;
	write(1, "sb\n", 4);
}

void	ss(t_tools *tools)
{
	swap_a(tools->stack_a);
	swap_b(tools->stack_b);
}

void	push_a(t_tools *tools)
{
	push_to_a(tools->stack_a,pop(tools->stack_b));
	write(1, "pa\n", 3);
}

void	push_b(t_tools *tools)
{
	push_to_a(tools->stack_b,pop(tools->stack_a));
	write(1, "pb\n", 3);
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

void	rotate_b(t_stack *stack)
{
	int content;
	t_list *ptr;

	ptr = stack->ptr;
	content = pop(stack);
	push(stack, content);
	write(1, "rb\n", 3);
}

void	rr(t_tools *rools)
{
	rotate_a(rools->stack_a);
	rotate_b(rools->stack_b);
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

void	reverse_rotate_b(t_stack *stack)
{
	t_list *last_node;
	t_list *blast_node;

	blast_node = stack->ptr;
	while(blast_node->next->next)
		blast_node = blast_node->next;
	last_node = blast_node->next;
	blast_node->next = NULL;
	ft_lstadd_front(&stack->ptr, last_node);
	write(1, "rrb\n", 4);
}

void	rrr(t_tools *tools)
{
	reverse_rotate_a(tools->stack_a);
	reverse_rotate_b(tools->stack_b);
}
