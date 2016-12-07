/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:45:03 by adorn             #+#    #+#             */
/*   Updated: 2016/12/07 10:54:23 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_list.h"

int		main()
{
	t_list	*element;
	int		data;
	int		*p_data;

	data = 42;
	p_data = &data;
	element = ft_create_elem(p_data);
	printf("Checking ex00 for 42: %d\n", *(int*)(element->data));
}
