/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:38:20 by earnaud           #+#    #+#             */
/*   Updated: 2020/07/05 10:58:04 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int b;

	b = 1;
	ft_putchar('/');
	while (b++ < x - 1 && x != 1)
		ft_putchar('*');
	if (x != 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	last_line(int x)
{
	int b;

	b = 1;
	ft_putchar('\\');
	while (b++ < x - 1)
		ft_putchar('*');
	if (x != 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	mid_line(int x)
{
	int b;

	b = 0;
	while (b++ < x)
	{
		if (b == 1 || b == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int c;

	c = 0;
	while (c++ < y && x > 0)
	{
		if (c == 1)
			first_line(x);
		else if (c == y)
			last_line(x);
		else
			mid_line(x);
	}
}
