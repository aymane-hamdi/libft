/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:29:01 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/25 18:40:11 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_elemnt;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		new_content = f (lst ->content);
		new_elemnt = ft_lstnew(new_content);
		if (new_elemnt == NULL)
		{
			del (new_content);
			ft_lstclear (&result, del);
			return (NULL);
		}
		ft_lstadd_back (&result, new_elemnt);
		lst = lst ->next;
	}
	return (result);
}
