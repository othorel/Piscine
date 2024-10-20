/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:39:52 by othorel           #+#    #+#             */
/*   Updated: 2024/07/19 09:25:13 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "Hello world !";
	printf("%s\n", str);
	printf("Len of str is : %d\n", ft_strlen(str));
}*/
