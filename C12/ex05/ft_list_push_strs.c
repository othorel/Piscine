/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:06:03 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/01 15:22:40 by karasu           ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*first;
	t_list	*elem;
	int		i;

	i = 0;
	first = NULL;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		if (!elem)
			return (NULL);
		elem->next = first;
		first = elem;
		i++;
	}
	return (first);
}
/*
void	print_list(t_list *first)
{
	while (first != NULL)
	{
		printf("%s -> ", (char *)first->data);
		first = first->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	char	*strs[] = {"Hello", "world", "!"};
	int		size = 3;
	t_list	*list = ft_list_push_strs(size, strs);

	print_list(list);
	return (0);
}*/
