/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:27:32 by othorel           #+#    #+#             */
/*   Updated: 2024/07/18 14:31:07 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("Avant la fonction : a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Après la fonction : a = %d, b = %d\n", a, b);
}*/
