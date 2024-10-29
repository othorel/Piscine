/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:36:31 by olthorel          #+#    #+#             */
/*   Updated: 2024/10/29 18:17:37 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
//#include <stdlib.h>
//#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*size;

	i = 0;
	size = begin_list;
	while (size != NULL)
	{
		i++;
		size = size->next;
	}
	return (i);
}
/*
t_list	*create_elem(void *data)
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
    t_list *list = NULL;

    list = create_elem("Premier élément");
    list->next = create_elem("Deuxième élément");
    list->next->next = create_elem("Troisième élément");

    int size = ft_list_size(list);
    printf("Taille de la liste : %d\n", size);
    t_list *current = list;
    while (current != NULL) 
	{
        t_list *tmp = current;
        current = current->next;
        free(tmp);
    }
    return 0;
}*/
