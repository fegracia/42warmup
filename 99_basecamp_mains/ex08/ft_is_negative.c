/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:14:01 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/29 22:13:16 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
	}
	else
	{
		c = 'P';
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_is_negative(-10);
	return (0);
}
