/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:06:49 by othorel           #+#    #+#             */
/*   Updated: 2024/07/31 11:26:16 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*/
int	main(void)
{
	char	src[] = "Hello world !";
	char	*dst = ft_strdup(src);

	if (dst != NULL)
	{
		printf("src : %s\n", src);
		printf("dup : %s\n", dst);
		free(dst);
	}
	return (0);
}*/
