/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:53:41 by adorn             #+#    #+#             */
/*   Updated: 2016/08/22 22:51:24 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_add(int i)
{
	return (i + 1);
}
int		main()
{
	int i;
	int tab[5] = {1, 2, 3, 4, 5};
	int *out;

	i = 0;
	out = ft_map(tab, 5, &ft_add);
	while (i < 5)
	{
		printf("%d", out[i]);
		i++;
	}
	return(0);
}
