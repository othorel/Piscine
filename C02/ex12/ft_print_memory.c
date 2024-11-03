/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:40:53 by othorel           #+#    #+#             */
/*   Updated: 2024/11/03 15:31:44 by karasu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ptnbr(unsigned long nb)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb > 9)
		ft_putnbr(nb / 16);
	ft_putchar(str[nb % 16]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned int	j;

	str = addr;
	i = 0;
	if (size == 0)
		return ;
	while (i < size)
	{
		ft_putnbr((unsigned long)(str + 1));
		ft_putchar(':');
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
				ft_putnbr(str[i + j]);
			else
			{
				ft_putchar(' ');
				ft_putchar(' ');			
			}
			if (j % 2 != 0 && j < 15)
				ft_putchar(' ');
			j++;
		}
		ft_putchar(' ');
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
			{
				if ()
			}
		}
