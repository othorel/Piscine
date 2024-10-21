/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:24:44 by othorel           #+#    #+#             */
/*   Updated: 2024/07/28 11:13:33 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	nb = ft_fibonacci(index -1) + ft_fibonacci(index -2);
	return (nb);
}
/*
int	main(void)
{
	int	index = 5;

	printf("Fibonacci of %d = %d\n", index, ft_fibonacci(index));
}*/
