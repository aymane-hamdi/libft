/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:21:18 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/25 18:06:17 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen (s);
	i = 0;
	result = malloc (sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	while (i < len)
	{
		result[i] = f (i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
