/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parterr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:24:30 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 22:09:47 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str, int j);

int	ft_parterr(char *buf, int i, int j, int k)
{
	int	m;
	int	l;

	m = 0;
	l = ft_atoi(buf, i - 3);
	while (buf[i] != '\0')
	{
		if (!(buf[i] == buf[k] || buf[i] == buf[k + 1] || buf[i] == '\n'))
			return (1);
		if (buf[i] == '\n')
			m++;
		i++;
	}
	if (m - 1 != l)
		return (1);
	if ((i - k - 4) != l * (j - k - 3))
		return (1);
	return (0);
}
