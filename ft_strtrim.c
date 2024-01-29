/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:00:31 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/25 18:50:08 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	start = 0;
	while (start < len_s1 && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = len_s1;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
