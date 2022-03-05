/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:25:30 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 18:34:47 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_parterr(char *buf, int i, int j, int k);
int	ft_num(char *str, int k);

int	ft_error(char *buf)
{
	int	i;
	int	j;
	int	k[3];

	i = 0;
	while (buf[i] != '\n')
	{
		if (!(buf[i] <= 126 && buf[i] >= 32))
			return (1);
		i++;
	}
	if (i < 4 || ft_num(buf, i - 3) == 0)
		return (1);
	k[0] = i - 3;
	k[1] = i - 2;
	k[2] = i - 1;
	if ((buf[k[0]] == buf[k[1]]
			|| buf[k[0]] == buf[k[2]] || buf[k[1]] == buf[k[2]]))
		return (1);
	j = i + 1;
	while (buf[j] != '\n')
		j++;
	if (ft_parterr(buf, i, j, k[0]) == 1)
		return (1);
	return (0);
}
