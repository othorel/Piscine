/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:21:00 by othorel           #+#    #+#             */
/*   Updated: 2024/07/26 09:21:06 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		write(1, &av[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			j = i + 1;
			while (j < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
			write(1, "\n", 1);
		}
	}
}
