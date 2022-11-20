/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgreco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:52:30 by fgreco            #+#    #+#             */
/*   Updated: 2022/11/20 18:12:49 by fgreco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_TOP_or_BOT_lane(int x)
{
	int	i;

	i = 1;

	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar (65);
		}
		if (i > 1 && i < x)
		{
			ft_putchar (66);
		}
		i++;
	}
}

void	ft_print_MID_lanes(int x, int y)
{
	int	i;
	int	j;

	ft_putchar('\n');
	i = 1;
	j = 2;
	while (i <= x && j < y)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('B');
		}
		if (i > 1 && i < x)
		{
			ft_putchar(' ');
		}
		i++;
		if (i == x + 1)
		{
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_TOP_or_BOT_lane(x);
	ft_print_MID_lanes(x, y);
	ft_print_TOP_or_BOT_lane(x);
}
