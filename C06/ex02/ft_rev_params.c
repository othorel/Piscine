/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:19:52 by othorel           #+#    #+#             */
/*   Updated: 2024/07/26 09:19:54 by othorel          ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]);
		i--;
		write(1, "\n", 1);
	}
}
