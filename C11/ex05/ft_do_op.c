/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int	ft_do_op(char **av)
{
	int		(*operation[5])(int, int);
	char	operator[5];
	int		i;

	operation[0] = add;
	operation[1] = sub;
	operation[2] = mul;
	operation[3] = div;
	operation[4] = mod;
	operator[0] = '+';
	operator[1] = '-';
	operator[2] = '*';
	operator[3] = '/';
	operator[4] = '%';
	i = 0;
	while (i < 5)
	{
		if (av[2][0] == operator[i] && av[2][1] == '\0')
			return (operation[i](ft_atoi(av[1]), ft_atoi(av[3])));
		i++;
	}
	return (-1);
}

int	main(int ac, char **av)
{
	int	result;

	if (ac == 4)
	{
		if ((av[2][0] == '/' && ft_atoi(av[3]) == 0)
				|| (av[2][0] == '%' && ft_atoi(av[3]) == 0))
		{
			if (av[2][0] == '/')
				write(1, "Stop : division by zero\n", 24);
			else
				write(1, "Stop : modulo by zero\n", 22);
			return (1);
		}
		result = ft_do_op(av);
		if (result == -1)
		{
			write(1, "0\n", 2);
			return (1);
		}
		ft_putnbr(ft_do_op(av));
		ft_putchar('\n');
	}
	return (0);
}
