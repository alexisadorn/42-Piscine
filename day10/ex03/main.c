/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 23:23:13 by adorn             #+#    #+#             */
/*   Updated: 2016/08/23 00:25:17 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int (*f)(char*));

int		ft_has_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'b')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	(void)argc;
	int (*f)(char*);

	f = &ft_has_a;
	printf("%d\n", ft_any(argv, f));
	return (0);
}
