/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:53:41 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/04 11:53:42 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('B');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	footer(int x, int y)
{
	int	i;

	i = 0;
	ft_putchar('C');
	while (i < x - 2)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x != 1)
		ft_putchar('C');
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
