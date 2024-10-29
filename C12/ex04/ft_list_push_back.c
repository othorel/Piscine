/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:58:44 by olthorel          #+#    #+#             */
/*   Updated: 2024/10/29 19:12:52 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
//#include <stdio.h>

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*current;

	elem = ft_create_elem(data);
	if (!elem)
		return ;
	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		current = *begin_list;
		while (current->next != NULL)
			current = current->next;
		current->next = elem;
	}
}
/*
int	main(void) 
{
    t_list *list = NULL;

    ft_list_push_back(&list, "Premier élément");
    ft_list_push_back(&list, "Deuxième élément");
    ft_list_push_back(&list, "Troisième élément");

    t_list *current = list;
    while (current != NULL) 
	{
        printf("%s\n", (char *)current->data);
        current = current->next;
    }
    while (list != NULL) 
	{
        t_list *tmp = list;
        list = list->next;
        free(tmp);
    }
    return 0;
}*/
