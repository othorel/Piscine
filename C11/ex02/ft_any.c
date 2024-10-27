/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int	start_a(char *str)
{
	return (str[0] == 'a');
}

int	main(void)
{
	char *tab[] = {"hello", "world", "apple", 0};

	if (ft_any(tab, &start_a))
	{
		printf("Au moins 1 chaine commence par 'a'\n");
		return (1);
	}
	else
	{
		printf("Aucune chaine commence par 'a'\n");
		return (0);
	}
}*/
