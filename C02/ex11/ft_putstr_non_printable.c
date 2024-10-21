/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:40:53 by othorel           #+#    #+#             */
/*   Updated: 2024/07/22 14:30:55 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthexa(unsigned char c)
{
	char	*str;

	str = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &str[c / 16], 1);
	write(1, &str[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_puthexa((unsigned char)str[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}*/
