/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:52:45 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/11 18:33:00 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	crush(void)
{
	write(2, "Error", 5);
	exit(0);
}

int main(int argc, char **argv)
{
	int i;
	int ar;
	char **tab;
	int int_atoi;
	t_list *l_numbers;
	t_stack *stack_a;
	t_stack *stack_b;
	
	stack_b = malloc(sizeof(t_stack));
	stack_a = malloc(sizeof(t_stack));
	stack_b->ptr = NULL;
	i = 0;
	ar = 1;
	while (ar < argc && argc > 1)
	{	
		if(!string_validator(argv[ar]))
			crush();
		ar++;
	}
	tab = split_args(argv);
	check_double(tab);												//Double fixed :D
	
	while (tab[i])
	{
		int_atoi = ft_atoi(tab[i]);
		// if(int_atoi > INT_MAX || int_atoi < INT_MIN)
		// 	crush();
		ft_lstadd_back(&l_numbers, ft_lstnew(int_atoi));
		i++;
	}
	                              								// linked list printed
	free(tab); //freeee
	list_to_stack(stack_a,l_numbers);
	// printf("ok");
	// printf("%d\n",bigest(stack_a));
	if(stack_a->size <= 3)
		sort_3(stack_a);
	if(stack_a->size > 3)
		sort_5(stack_a);
	// sorting_list(l_numbers);
	// while (l_numbers)
	// {
	// 	printf("%d\n", l_numbers->content);
	// 	l_numbers = l_numbers->next;
	// } (Sort the linked list)
	
	// push(stack_b,pop(stack_a));

	// while (stack_a->ptr)
	// {
	// 	printf("%d\n", stack_a->ptr->content);
	// 	stack_a->ptr = stack_a->ptr->next;
	// }
	// printf("%c\n", 'a');
	// while (stack_b->ptr)
	// {
	// 	printf("   %d\n", stack_b->ptr->content);
	// 	stack_b->ptr = stack_b->ptr->next;
	// }
	// printf("   %c\n", 'b');
	
	// printf("stack b = %d\n",stack_b->ptr->content);
	// printf("stack b size = %d\n",stack_b->size);
	

	
	
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
	// // while(stack_a->ptr)
	// {
	// 	printf("%d\n",stack_a->ptr->content);
	// 	stack_a->ptr = stack_a->ptr->next;
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