/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:48:01 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/03 19:49:54 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_res(long res)
{
	if(res > LONG_MAX || res < LONG_MIN)
		return(1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	a;
	long res;
	int	sign;
	int result;

	res = 0;
	a = 0;
	sign = 1;
	while (str[a] == ' ' || (str[a] <= 13 && str[a] >= 9))
		a++;
	if (str[a] == '-')
	{
		sign = sign * -1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (str[a] <= '9' && str[a] >= '0')
	{
		res = str[a] - '0' + (res * 10);
		if(check_res(res))
			crush();
		a++;
	}
	if(res > INT_MAX || res < INT_MIN)
		crush();
	result = res;
	return (result * sign);
}
