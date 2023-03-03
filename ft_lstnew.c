/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:29:35 by khaimer           #+#    #+#             */
/*   Updated: 2023/02/15 09:55:24 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*file;

	file = (t_list *)malloc(sizeof(t_list));
	if (!file)
		return (NULL);
	file -> content = content;
	file -> next = NULL;
	return (file);
}
