/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:15:38 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/23 19:27:25 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*sou_str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen (s))
		return (ft_strdup(""));
	if (len > ft_strlen (s) - start)
		len = ft_strlen (s) - start;
	sou_str = malloc(len + 1);
	if (!sou_str)
		return (NULL);
	while (i < len)
	{
		sou_str[i] = s[start + i];
		i++;
	}
	sou_str[i] = '\0';
	return (sou_str);
}
