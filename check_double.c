/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:13:28 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 17:30:31 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_intcmp(char *s1, char *s2)
{
	if(ft_atoi(s1) == ft_atoi(s2))
		return 1;
	return 0;
}

void	check_double(char **str)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if(ft_intcmp(str[i],str[j]))
				crush();
			j++;
		}
		i++;
	}
}