/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:23:21 by olthorel          #+#    #+#             */
/*   Updated: 2024/10/29 18:50:00 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
/*
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

int	main(void)
{
	t_list	*list = ft_create_elem("First elem");
	list->next = ft_create_elem("Second elem");
	list->next->next = ft_create_elem("Third elem");

	t_list	*last = ft_list_last(list);
	if (last != NULL)
		printf("Last elem of list : %s\n", (char *)last->data);
	else
		printf("List not found.\n");
	t_list	*tmp;
	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	return (0);
}*/
