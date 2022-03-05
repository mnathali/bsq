/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:28:48 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 22:18:45 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_lenght(char *buf);
void	ft_argc(char *buf);
void	ft_bsq(char *buf, int lenght, int i);
int		ft_error(char *buf);
int		ft_melloc(int argc, char **argv);

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*buf;

	i = argc - 1;
	if (argc != 1)
		buf = (char *)malloc(sizeof(*buf) * (ft_melloc(argc, argv) + 1));
	if (argc == 1)
		ft_argc(buf);
	while (i != 0)
	{
		fd = open(argv[argc - i], O_RDONLY);
		buf[read(fd, buf, ft_melloc(argc, argv) + 1)] = '\0';
		if (ft_error(buf) == 1)
		{
			write(2, "map error\n", 10);
			i--;
			continue ;
		}
		ft_bsq(buf, ft_lenght(buf), 0);
		close(fd);
		i--;
	}
	free(buf);
	return (0);
}
