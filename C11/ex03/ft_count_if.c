/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
int	start_a(char *str)
{
	return (str[0] == 'a');
}

int	main(void)
{
	char	*tab[] = {"apple", "banana", "avocado", "grape", "apricot"};
	int		length = 5;
	int	count = ft_count_if(tab, length, &start_a);

	printf("Count of char start 'a' = %d\n", count);
	return (0);
}*/
