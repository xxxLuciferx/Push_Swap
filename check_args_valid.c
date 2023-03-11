/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:20:37 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/11 17:43:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_char(char c)
{
	if((c >= '0' && c <= '9') || c == ' ' || c == '-' || c == '+')
		return (0);
	return(1);
}

int	string_validator(char *str)
{
	int i;
	int c;
	int counter;

	i = 0;
	c = 0;
	counter = 0;
	while (str[i])
	{
		if(str[i] == '+' || str[i] == '-')
		{
			counter++;
			i++;
		}
		if(!check_valid_char(str[i]) && (str[i + 1] == '-' || str[i + 1] == '+'))
			crush();
		if(((str[i] >= '0' && str[i] <= '9')))
		{
			counter = 0;
			c++;
		}
		i++;
	}
	if(counter <= 1 && c != 0)
		return (1);
	return (0);
}