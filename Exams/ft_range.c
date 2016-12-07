/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:32:37 by adorn             #+#    #+#             */
/*   Updated: 2016/11/17 17:37:13 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *ptr;
	int i;
	int size;
	int val;

	size = (end > start) ? (end - start) + 1 : (start - end) + 1;
	ptr = (int*)malloc(sizeof(int) * size);
	i = 0;
	val = start;
	while(i < size)
	{
		ptr[i] = val;
		val = (end > start) ? val + 1 : val - 1;
		i++;
	}
	return (ptr);
}
