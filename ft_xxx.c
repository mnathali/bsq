/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xxx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:26:10 by mnathali          #+#    #+#             */
/*   Updated: 2021/08/25 18:45:19 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenght(char *buf);
void	ft_putstr(char *str);

void	ft_xxx(char *buf, char symb, int j, int i)
{
	int	l;
	int	k;
	int	lenght;

	lenght = ft_lenght(buf);
	k = 1;
	l = 0;
	while (l < j * j)
	{
		if (l / j == k && l % j == 0)
		{
			k++;
			i = i + lenght - j;
		}
		buf[i] = symb;
		i++;
		l++;
	}
	ft_putstr(buf);
}
