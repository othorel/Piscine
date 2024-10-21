/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:53:29 by othorel           #+#    #+#             */
/*   Updated: 2024/07/28 15:59:37 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_soluce(int *tab)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = tab[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_safe(int *tab, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (tab[i] == row)
			return (0);
		if (i - col == tab[i] - row || i - col == row - tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_solve(int *tab, int col)
{
	int	soluce;
	int	row;

	soluce = 0;
	row = 0;
	if (col == 10)
	{
		ft_print_soluce(tab);
		return (1);
	}
	while (row < 10)
	{
		if (ft_safe(tab, row, col))
		{
			tab[col] = row;
			soluce = soluce + ft_solve(tab, col + 1);
		}
		row++;
	}
	return (soluce);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];

	return (ft_solve(tab, 0));
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}*/
