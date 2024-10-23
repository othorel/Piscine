/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:18:32 by othorel           #+#    #+#             */
/*   Updated: 2024/07/31 11:24:04 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		if (i < size -1)
			total_len = total_len + sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	if (size == 0)
	{
		word = (char *)malloc(1);
		if (word)
			word[0] = '\0';
		return (word);
	}
	word = malloc(sizeof(char) * (total_size(size, strs, sep) + 1));
	if (!word)
		return (NULL);
	word[0] = '\0';
	while (i < size)
	{
		ft_strcat(word, strs[i]);
		if (i < size -1)
			ft_strcat(word, sep);
		i++;
	}
	return (word);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "world", "!"};
	char	*sep = ", ";
	char	*join = ft_strjoin(3, strs, sep);

	if (join)
	{
		printf("%s\n", join);
		free(join);
	}
	return (0);
}*/
