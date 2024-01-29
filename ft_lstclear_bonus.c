/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 21:53:29 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/25 17:12:25 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*help;
	t_list	*next;

	if (*lst == NULL || del == NULL)
		return ;
	help = *lst;
	next = NULL;
	while (help != NULL)
	{
		next = help -> next;
		del (help -> content);
		free (help);
		help = next;
	}
	*lst = NULL;
}
