/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_string_and_split.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:18:13 by khaimer           #+#    #+#             */
/*   Updated: 2023/02/24 20:18:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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