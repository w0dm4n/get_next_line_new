/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 08:28:21 by frmarinh          #+#    #+#             */
/*   Updated: 2015/12/17 08:28:23 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "errno.h"
#include <string.h>

int		main(int argc, char **argv)
{
	int				fd;
	char			*line;
	int				i;
	int				cmp;
	int				fd_2;
	int				fd_3;
	int				fd_4;

	line = NULL;
	i = 0;
	cmp = 0;
	if (argc != 2)
	{
		ft_putstr("Wrong argument\n");
		exit(-1);
	}
	//argv[1] = NULL;
	fd = open(argv[1], O_RDONLY);
	fd_2 = open("Makefile", O_RDONLY);
	fd_3 = open("test", O_RDONLY);
	fd_4 = open("test_2", O_RDONLY);
	//fd = 1;
	//write(fd, "aaa", 3);
	if (fd != -1 && fd_2 != -1 && fd_3 != -1 && fd_4 != -1)
	{
		/*while (get_next_line(fd_2, &line))
		{
			ft_putstr(line);
			ft_putstr("\n");
		}*/
		get_next_line(fd, &line);
		ft_putstr(line);
		get_next_line(fd, &line);
		ft_putstr(line);
		//ft_putstr("\n");
		//get_next_line(fd_3, &line);
		//ft_putstr(line);
		//ft_putstr("\n");
		//get_next_line(fd_2, &line);
		//ft_putstr(line);
		//ft_putstr("\n");
		//get_next_line(fd_4, &line);
		//ft_putstr(line);
		//ft_putstr("\n");
	}
	else
		ft_putstr(strerror(errno));
	close (fd);
	return (0);
}