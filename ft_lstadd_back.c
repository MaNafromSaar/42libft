/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:14:56 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/13 10:52:33 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp->next != 0 && tmp)
		tmp = tmp->next;
	tmp->next = new;
	new->next = (0);
	return ;
}
