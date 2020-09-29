/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 10:52:46 by ldutriez          #+#    #+#             */
/*   Updated: 2020/09/29 16:30:06 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	char 	*line;
	int 	fd;
	int 	ret;
	char	c;

	c = '\n';
	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		write(1, line, ft_slen_eol(line, STRLEN));
		write(1, &c, 1);
		free(line);
	}
	free(line);
	close(fd);
	return (0);
}
