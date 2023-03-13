/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:08:42 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/13 18:12:19 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_char(char c)
{
	if ((c >= '0' && c <= '9') || c == ' ' || c == '-' || c == '+')
		return (0);
	return (1);
}

int	string_validator(char *str)
{
	int	i;
	int	c;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i++])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			counter++;
			i++;
		}
		if (!check_valid_char(str[i]) && \
		(str[i + 1] == '-' || str[i + 1] == '+'))
			crush();
		if (((str[i] >= '0' && str[i] <= '9')))
		{
			counter = 0;
			c = 1;
		}
	}
	if (counter <= 1 && c != 0)
		return (1);
	return (0);
}

char	**split_args(char **str)
{
	int i;
	char *string;
	char **tab;

	i = 1;
	string = (char *)malloc(sizeof(char) * 2);
	if(!string)
		return 0;
	string[1] = '\0';
	while (str[i])
	{
		string = ft_strjoin(string, str[i]);
		string = ft_strjoin(string, " ");
		i++;
	}
	tab = ft_split(string, ' ');
	free(string);
	return (tab);
}

int		ft_intcmp(char *s1, char *s2)
{
	if(ft_atoi(s1) == ft_atoi(s2))
		return 1;
	return 0;
}

void	check_double(t_tools *tools)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (tools->tab[i])
	{
		j = i + 1;
		while (tools->tab[j])
		{
			if(ft_intcmp(tools->tab[i],tools->tab[j]))
				crush();
			j++;
		}
		i++;
	}
	i = 0;
	while (tools->tab[i])
	{
		tools->int_atoi = ft_atoi(tools->tab[i]);
		ft_lstadd_back(&tools->l_numbers, ft_lstnew(tools->int_atoi));
		i++;
	}
}

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