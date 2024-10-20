/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:37:46 by othorel           #+#    #+#             */
/*   Updated: 2024/07/19 11:01:38 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 3;
	tab[1] = 5;
	tab[2] = 2;
	tab[3] = 4;
	tab[4] = 1;
	size = 5;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}*/
