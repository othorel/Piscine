/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: othorel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:15:02 by othorel           #+#    #+#             */
/*   Updated: 2024/08/01 13:36:26 by othorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

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

int	ft_display_file(char *name)
{
	int		fd;
	int		b_read;
	char	buffer[BUF_SIZE];
	
	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return (0);
	}
	while ((b_read = read(fd, buffer, BUF_SIZE)) > 0)
		write(1, buffer, b_read);
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr_fd(2, "File name missing.\n");
	else if (ac > 2)
		ft_putstr_fd(2, "Too many arguments.\n");
	else
		return (ft_display_file(av[1]));
	return (0);
}
