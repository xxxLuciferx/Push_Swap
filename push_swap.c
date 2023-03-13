/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:52:45 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/13 22:53:07 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	crush(void)
{
	write(1, "Error", 5);
	exit(0);
}

int main(int argc, char **argv)
{
	int i;
	t_tools *tools;
	
	tools = malloc(sizeof(t_tools));
	tools->arg = 1;
	i = 0;
	while (tools->arg < argc && argc > 1)
	{	
		if(!string_validator(argv[tools->arg]))
			crush();
		tools->arg++;
	}
	tools->tab = split_args(argv);
	check_double(tools);
	
	
	tools->stack_b = malloc(sizeof(t_stack));
	tools->stack_a = malloc(sizeof(t_stack));
	tools->stack_b->ptr = NULL;
	list_to_stack(tools->stack_a,tools->l_numbers);
	sorting_list(tools->l_numbers);
	//--------------------------
	// if(tools->stack_a->size <= 3)
	// 	sort_3(tools->stack_a);
	// if(tools->stack_a->size > 3 && tools->stack_a->size < 6)
	// 	sort_5(tools);
	
	// while (tools->l_numbers)
	// {
	// 	printf("%d\n", tools->l_numbers->content);
	// 	tools->l_numbers = tools->l_numbers->next;
	// }
	
	// // push(tools->stack_b,pop(tools->stack_a));

	
	// while (tools->stack_a->ptr)
	// {
	// 	printf("a = %d\n", tools->stack_a->ptr->content);
	// 	tools->stack_a->ptr = tools->stack_a->ptr->next;
	// }
	// while (tools->stack_b->ptr)
	// {
	// 	printf("stack b = %d\n", tools->stack_b->ptr->content);
	// 	tools->stack_b->ptr = tools->stack_b->ptr->next;
	// }

	// printf("%c\n", 'a');
	// while (tools->stack_b->ptr)
	// {
	// 	printf("   %d\n", tools->stack_b->ptr->content);
	// 	tools->stack_b->ptr = tools->stack_b->ptr->next;
	// }
	// printf("   %c\n", 'b');
	
	// printf("size = %d\n",tools->stack_a->size);
	// printf("stack b size = %d\n",tools->stack_b->size);
	

	
	
	return 0;
}











































	
//----------------------------
	// t_list *cpy;
	// cpy = l_numbers;
	// printf("DONE\n");
	// swap_top_a(l_numbers);
	// while (cpy)
	// {
	// 	printf("%d\n",cpy->content);
	// 	cpy = cpy->next;
	// }
	

	// cpy = l_numbers;
	// printf("---------\n"); 			//
	// while (cpy)
	// {
	// 	printf("%d\n",cpy->content);
	// 	cpy = cpy->next;
	// }
	// printf("---------\n"); 			//
	// // while(tools->stack_a->ptr)
	// {
	// 	printf("%d\n",tools->stack_a->ptr->content);
	// 	tools->stack_a->ptr = tools->stack_a->ptr->next;
	// }
	// cpy = l_numbers;
	// void	rotate_a(cpy);

	
	// t_data *list;
	
	// list = set_t_data(argc, argv);
	// int count = 0;
	// printf("list length: %d\n", list->length);
	// while (count < list->length)
	// 	printf("%d\n", list->data[count++]);

	// // double_int(&l_numbers);
	

// typedef struct int_data
// {
// 	int *data;
// 	int length;
// }	t_data;



// t_data *set_t_data(int argc, char **argv)
// {
// 	int i = -1;
// 	t_data *result;

// 	result = malloc(sizeof(t_data));
// 	result->data = malloc(argc-1 * sizeof(int));
// 	result->length = argc-1;
// 	while(++i < argc -1)
// 		result->data[i] = ft_atoi(argv[i + 1]);
// 	return result;
// }