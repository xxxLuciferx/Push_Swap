/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:17:01 by khaimer           #+#    #+#             */
/*   Updated: 2023/03/13 16:28:26 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		str1;
	int		str2;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	res = (char *)malloc(str1 + str2 + 1);
	if (!res)
		return (NULL);
	while (++j < str1)
		res[j] = s1[j];
	while (++i < str2)
		res[i + j] = s2[i];
	res[i + j] = '\0';
	free(s1);
	return (res);
}
