/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:06:55 by adorn             #+#    #+#             */
/*   Updated: 2016/11/07 17:20:13 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i] - 32);
		else if(str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
