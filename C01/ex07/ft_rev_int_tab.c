/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	size = 5;
	i = 0;
	printf("Tab before rev :");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("Tab after  rev :");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}*/
