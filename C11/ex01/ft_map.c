/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*map;

	i = 0;
	map = malloc(sizeof(int) * length);
	if (!map)
		return (0);
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
/*
int	ft_plus(int nb)
{
	return (nb + 10);
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	*map = ft_map(tab, 6, &ft_plus);
	int	i = 0;

	while (i < 6)
	{
		printf("%d / ", map[i]);
		i++;
	}
	printf("\n");
	free(map);
	return (0);
}*/
