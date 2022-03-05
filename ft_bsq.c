/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:27:24 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 22:16:30 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_index(char *buf, char symb, int i, int lenght);
void	ft_xxx(char *buf, char symb, int j, int i);

void	ft_check(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] != '\0')
		i++;
	i++;
	while (buf[i])
	{
		buf[i] = '\0';
		i++;
	}
}

void	ft_bsq(char *buf, int lenght, int i)
{
	int		n;
	int		k[2];
	char	symb[3];

	n = 0;
	i = 0;
	k[0] = 0;
	ft_check(buf);
	while (buf[i] != '\n')
		i++;
	symb[0] = buf[i - 3];
	symb[1] = buf[i - 2];
	symb[2] = buf[i - 1];
	i++;
	while (buf[i] != '\0')
	{
		n = ft_index(buf, symb[0], i, lenght);
		if (n > k[0])
		{
			k[0] = n;
			k[1] = i;
		}
		i++;
	}
	ft_xxx(buf, symb[2], k[0], k[1]);
}
