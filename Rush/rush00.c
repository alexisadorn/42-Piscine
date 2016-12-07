/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:54:51 by adorn             #+#    #+#             */
/*   Updated: 2016/11/16 15:00:10 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	output(int r, int c, int x, int y)
{
	if (r == 1 || r == y || c == 1 || c == x)
	{
		if ((r == 1 && c == 1) || (r == 1 && c == x))
			ft_putchar('o');
		else if ((r == y && c == 1) || (r == y && c == x))
			ft_putchar('o');
		else if ((r == 1 && c != 1) || (r == 1 && c != x))
			ft_putchar('-');
		else if ((r == y && c != 1) || (r == y && c != x))
			ft_putchar('-');
		else
			ft_putchar('|');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (++r <= y)
	{
		while (++c <= x)
		{
			output(r, c, x, y);
		}
		if (x > 0)
			ft_putchar('\n');
		c = 0;
	}
}
