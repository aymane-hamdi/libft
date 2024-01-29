/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:06:10 by ahamdi            #+#    #+#             */
/*   Updated: 2023/12/25 17:59:11 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*help;

	if (lst == NULL || f == NULL)
		return ;
	help = lst;
	while (help != NULL)
	{
		f (help -> content);
		help = help ->next;
	}
}
