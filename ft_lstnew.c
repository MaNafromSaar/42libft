/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 08:49:36 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/13 10:08:35 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = (0);
	return ((t_list *)node);
}
// creates a struct of type t_list which is a linked list
// this data type is protoyped in the header file 
// on top! not after the functions that may use it
// the address that points to "content" has "content"
// as its content (sounds weird)
// as long as there is just a new list, the address that
// would point to the next item of that list has NULL as content