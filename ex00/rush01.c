/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:43:40 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/04 11:44:03 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('*');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	footer(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('\\');
	while (i < x - 2)
	{
		ft_putchar('*');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	header(x, y);
	while (i < y - 2)
	{
		body(x, y);
		i = i + 1;
	}
	if (y != 1)
		footer(x, y);
}
