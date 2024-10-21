/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:48:32 by othorel           #+#    #+#             */
/*   Updated: 2024/07/22 20:59:07 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_num(char c)
{
	return (c >= 48 && c <= 57);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (is_letter(str[i]) || is_num(str[i]))
		{
			if (word && is_min(str[i]))
				str[i] -= 32;
			else if (!word && is_maj(str[i]))
				str[i] += 32;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (str);
}
/*
int	main(void) 
{
	char	str[] = "salut, comment tu vas ? 42mots";
	printf("%s\n", ft_strcapitalize(str));
}*/
