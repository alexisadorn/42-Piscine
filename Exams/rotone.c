/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 09:02:51 by exam              #+#    #+#             */
/*   Updated: 2016/11/29 09:23:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			ft_putchar(str[i] + 1);
		else if(str[i] == 'z' || str[i] == 'Z')
			ft_putchar(str[i] - 25);
		else if((str[i] >= 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 127))
			ft_putchar(str[i]);
		else
			ft_putchar(str[i]);
	i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
