/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:15:21 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/28 22:51:18 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	int d;
	c = *a;
	d = *b;
	*a = d;
	*b = c;
	//printf("O valor depois do swap de a eh %i e o valor de b eh: %i\n", *a, *b);
}

int	main(void)
{
	int a;
	int b;
	a = 1;
	b = 2;
	printf("O valor anterior de a eh: %i\n", a);
	printf("O valor anterior de b eh: %i\n", b);
	ft_swap(&a, &b);
	printf("O valor depois do swap de a eh: %i\n", a);
	printf("O valor depois do swap de b eh: %i\n", b);
	return (0);
}
