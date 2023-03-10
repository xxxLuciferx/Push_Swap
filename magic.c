/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:34:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/10 19:18:37 by khaimer          ###   ########.fr       */
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

void    sorting_list(t_list *l_numbers)
{
    t_list	*ptr_sorted;
    int swap;
    ptr_sorted = l_numbers;
    while(l_numbers->next)
    {
        if(l_numbers->content > l_numbers->next->content)
        {
            swap = l_numbers->content;
            l_numbers->content = l_numbers->next->content;
            l_numbers->next->content = swap;
            l_numbers = ptr_sorted;
        }
        else if (l_numbers->content <= l_numbers->next->content)
            l_numbers = l_numbers->next;
    }
}

int		bigest(t_stack *stack)
{
	int biggest_number;
	t_list *ptr;

	ptr = stack->ptr;
	biggest_number = ptr->content;
	while (ptr->next)
	{
		if(ptr->content < ptr->next->content)
			biggest_number = ptr->next->content;
		ptr = ptr->next;
	}
	return(biggest_number);
}

int		smallest(t_stack *stack)
{
	int smallest_number;
	t_list *ptr;

	ptr = stack->ptr;
	smallest_number = ptr->content;
	while (ptr->next)
	{
		if(smallest_number > ptr->next->content)
			smallest_number = ptr->next->content;
		ptr = ptr->next;
	}
	return(smallest_number);
}