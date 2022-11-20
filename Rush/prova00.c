/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgreco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:52:30 by fgreco            #+#    #+#             */
/*   Updated: 2022/11/20 16:11:03 by fgreco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"
#include "main.c"

void ft_printfirst_line(int x)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= x && j == 1)
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

void ft_printsecond_line(int x, int y)
{
	ft_putchar('\n');
	int i;
	int j;
	
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
void	ft_printthird_line(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= x & j == y)
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
void	rush(int x, int y)
{
	if ( x <= 0 || y <= 0)
		return ;
	ft_printfirst_line(x);
	ft_printsecond_line(x, y);
	ft_printthird_line(x, y);
}
