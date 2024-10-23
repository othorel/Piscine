/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:20:18 by othorel           #+#    #+#             */
/*   Updated: 2024/07/30 13:08:13 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&range, 0, 10);
	while (i < size)
	{
		printf("range[%d] = %d\n", i, range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
