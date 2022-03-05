/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:28:03 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 22:18:20 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#define LENA 42000000

int		ft_error(char *buf);
int		ft_lenght(char *buf);
void	ft_bsq(char *buf, int lenght, int i);

void	ft_argc(char *buf)
{
	int	j;

	j = 0;
	buf = (char *)malloc(sizeof(*buf) * LENA + 1);
	while (read(0, &buf[j], 1))
		j++;
	buf[j] = '\0';
	if (ft_error(buf) == 1)
		write(2, "map error\n", 10);
	else
		ft_bsq(buf, ft_lenght(buf), 0);
}
