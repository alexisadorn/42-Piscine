/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:38:39 by adorn             #+#    #+#             */
/*   Updated: 2016/11/17 16:00:06 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			ft_putchar(str[i] + 13);
		else if ((str[i] >= 'n' && str[i] <='z') || (str[i] >= 'N' && str[i] <= 'Z'))
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
