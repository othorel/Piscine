/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 1;
	down = 1;
	while (i < length -1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			up = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			down = 0;
		i++;
	}
	if (up == 1 || down == 1)
		return (1);
	return (0);
}
/*
int	cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[] = {1, 3, 2, 4, 5};

	if (ft_is_sort(tab, 5, &cmp) == 1)
		printf("Tab est trie : 1\n");
	else
		printf("Tab est trie : 0\n");
	return (0);
}*/
