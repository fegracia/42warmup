/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:56:14 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/30 17:44:15 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*tab;

	tab = (int *)malloc((max - min) * sizeof(int));
	count = 0;
	if (min >= max)
		return (0);
	if (!(tab))
		return (0);
	while (count < max - min)
	{
		tab[count] = min + count;
		count++;
	}
	return (tab);
}

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 5;
	max = 180;
	array = ft_range(min, max);
	i = 0;
	while (i <= 0)
	{
		printf("%d", array[i]);
		i++;
	}
}
