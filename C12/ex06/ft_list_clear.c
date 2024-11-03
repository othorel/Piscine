/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:45:04 by olthorel          #+#    #+#             */
/*   Updated: 2024/11/01 15:54:37 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current != NULL)
	{
		next = current->next;
		if (free_fct)
			free_fct(current->data);
		free(current);
		current = next;
	}
}
/*
void	free_str(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*list = NULL;
	ft_list_clear(list, free_str);
	return (0);
}*/
