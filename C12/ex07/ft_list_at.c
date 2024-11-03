/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:46:35 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/02 12:53:48 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list != NULL)
	{
		if (i == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		i++;
	}
	return (NULL);
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
    t_list *list = ft_create_elem("First");
    list->next = ft_create_elem("Second");
    list->next->next = ft_create_elem("Third");

    t_list *elem = ft_list_at(list, 1);
    if (elem)
        printf("Element at index 1: %s\n", (char *)elem->data);
    else
        printf("Element not found at index 1\n");

    elem = ft_list_at(list, 3); // Index hors limite
    if (elem)
        printf("Element at index 3: %s\n", (char *)elem->data);
    else
        printf("Element not found at index 3\n");

    return 0;
}*/
