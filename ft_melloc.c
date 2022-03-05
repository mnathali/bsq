/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_melloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:29:36 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 20:35:37 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_melloc(int argc, char **argv)
{
	int		i;
	int		fd;
	int		j;
	char	duf[1];

	j = 0;
	while (argc != 1)
	{
		i = 0;
		fd = open(argv[argc - 1], O_RDONLY);
		while (read(fd, duf, 1))
			i++;
		if (i > j)
			j = i;
		close(fd);
		argc--;
	}
	return (j);
}
