/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:12:29 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/22 16:46:22 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = ((unsigned char *)str1);
	s2 = ((unsigned char *)str2);
	while (i < n)
	{
		if (s1[i] != s2[i]) 
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
