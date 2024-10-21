/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:09:03 by othorel           #+#    #+#             */
/*   Updated: 2024/07/23 18:04:13 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "banana";
	char	s2[] = "apple";
	int		result = ft_strcmp(s1, s2);

	if (result < 0)
		printf("%s est inferieur a %s\n", s1, s2);
	if (result > 0)
		printf("%s est superieur a %s\n", s1, s2);
	else
		printf("%s est egale a %s\n", s1, s2);
}*/
