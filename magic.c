/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:34:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 19:46:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pop(t_stack *stack)
{
	int content;
	t_list *ptr;
	
	content = stack->ptr->content;
	ptr = stack->ptr;
	stack->ptr = stack->ptr->next;
	stack->size--;
	free(ptr);
	return(content);
}

void	push(t_stack *stack, int content)
{
	t_list *node;
	node = ft_lstnew(content);
	ft_lstadd_back(&stack->ptr, node);
	stack->size++;
}