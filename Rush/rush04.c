/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:54:51 by adorn             #+#    #+#             */
/*   Updated: 2016/11/16 15:00:36 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_output(int row, int col, int x, int y)
{
	if (row == 1 || row == y || col == 1 || col == x)
	{
		if (row == y && col == x && y != 1 && x != 1)
			ft_putchar('A');
		else if (row == 1 && col == 1)
			ft_putchar('A');
		else if ((row == 1 && col == x) || (row == y && col == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (++row <= y)
	{
		while (++col <= x)
		{
			ft_output(row, col, x, y);
		}
		if (x > 0)
			ft_putchar('\n');
		col = 0;
	}
}
