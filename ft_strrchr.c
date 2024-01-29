/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:32:02 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/22 16:47:24 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_oc;
	int		i;

	i = 0;
	last_oc = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_oc = (char *)&s[i];
		i++;
	}
	if ((char)c == 0)
		last_oc = ((char *)&s[i]);
	return (last_oc);
}
