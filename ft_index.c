/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:26:45 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 17:27:09 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(char *buf, char symb, int i, int lenght)
{
	int	j;
	int	l;
	int	n;

	j = i;
	n = 0;
	l = 0;
	while (buf[j] == symb)
	{
		if ((j - n - l * lenght) == i)
		{
			if (l != n)
				j = j + lenght - n - 1;
			l++;
		}
		if (l - 1 == n)
		{
			j = j - n * lenght - n - 1;
			n++;
			l = 0;
		}
		j++;
	}
	return (n);
}
