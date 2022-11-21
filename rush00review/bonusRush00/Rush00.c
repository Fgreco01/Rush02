/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgreco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:52:30 by fgreco            #+#    #+#             */
/*   Updated: 2022/11/20 23:35:27 by lsinigag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_top_lane(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar ('o');
		}
		if (i > 1 && i < x)
		{
			ft_putchar ('-');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_mid_lanes(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (i <= x && j < y)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
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

void	ft_print_bot_lane(int x, int y)
{
	int	i;

	i = 1;
	if (y > 1)
	{
		while (i <= x)
		{
			if (i == 1 || i == x)
			{
				ft_putchar('o');
			}
			if (i > 1 && i < x)
			{
				ft_putchar('-');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)

{
	if (x == 0 || y <= 0)
		return ;
	ft_print_top_lane(x);
	ft_print_mid_lanes(x, y);
	ft_print_bot_lane(x, y);
}
