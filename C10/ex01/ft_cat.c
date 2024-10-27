/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>

#define BUF_SIZE 30720

void	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	display_error(char *name)
{
	ft_putstr_fd(2, "ft_cat: ");
	ft_putstr_fd(2, basename(name));
	ft_putstr_fd(2, ": ");
	ft_putstr_fd(2, strerror(1));
	ft_putstr_fd(2, "\n");
}

void	display_file(char *name)
{
	int		fd;
	int		b_read;
	char	buffer[BUF_SIZE];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		display_error(name);
		return ;
	}
	while ((b_read = read(fd, buffer, BUF_SIZE)) > 0)
		write(1, buffer, b_read);
	if (b_read == -1)
		display_error(name);
	close(fd);
}

int	main(int ac, char **av)
{
	int		i;
	char	buffer[BUF_SIZE];
	int		b_read;

	i = 1;
	if (ac == 1)
	{
		while ((b_read = read(0, buffer, BUF_SIZE)) > 0)
			write(1, buffer, b_read);
	}
	else
	{
		while (i < ac)
		{
			display_file(av[i]);
			i++;
		}
	}
	return (0);
}
